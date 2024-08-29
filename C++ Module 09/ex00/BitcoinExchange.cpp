#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}

std::map<std::string, float>::size_type BitcoinExchange::data_size() const
{
	return data.size();
}

std::map<std::string, float>::const_iterator BitcoinExchange::operator[](map::size_type pos) const
{
	typedef std::map<std::string, float> map;

	map::const_iterator iterl = this->data.begin();
	std::advance(iterl, pos);
	return iterl;
}

std::map<std::string, float>::value_type::second_type BitcoinExchange::operator[](std::string key) const
{
	typedef std::map<std::string, float> map;
	map::const_iterator it;

	struct Date
	{
		std::string year;
		std::string month;
		std::string day;
	};

	it = data.find(key);
	while (it == data.end())
	{
		Date date;
		std::stringstream ss(key);
		int year;
		int month;
		int day;

		std::getline(ss, date.year, '-');
		std::getline(ss, date.month, '-');
		std::getline(ss, date.day, '-');
		ss.clear();
		ss.str(date.year);
		ss >> year;
		ss.clear();
		ss.str(date.month);
		ss >> month;
		ss.clear();
		ss.str(date.day);
		ss >> day;
		day--;
		if (day == 0)
		{
			static const int daysInMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
			month--;
			day = daysInMonths[month - 1];
			if ((year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) && month == 2)
				day = 29;
			if (month == 0)
			{
				year--;
				month = 12;
				day = daysInMonths[month - 1];
				if (year < 2009)
				{
					std::cerr << "Error: wrong data in database" << std::endl;
					return 0;
				}
			}
		}
		ss.clear();
		ss << year << "-" << std::setw(2) << std::setfill('0') << month << "-" << std::setw(2) << std::setfill('0') << day;
		key = ss.str();
		it = data.find(key);
	}
	return it->second;
}

void BitcoinExchange::append(std::string key, float value)
{
	std::pair<map::iterator, bool> ret;
	ret = data.insert(std::make_pair(key, value));
	if (ret.second == false)
	{
		std::cout << "Changing rate for " << ret.first->first << std::endl;
		data[key] = value;
	}
}

void BitcoinExchange::append(std::map<std::string, float> src)
{
	data.insert(src.begin(), src.end());
}

void BitcoinExchange::append(std::string line)
{
	std::stringstream	ss(line);
	std::string			key;
	float				value;

	if (!(line.find(',') == line.npos))
	{
		std::getline(ss, key, ',');
		if (key == "date")
			return ;
		try {
			ss >> value;
		} catch (std::exception &e) {
			std::cerr << "Error: Bad input on key " << key << std::endl;
		}
	}
	else
	{
		std::cerr << "Error: Bad input" << std::endl;
		return ;
	}
	append(key, value);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src): data(src.data)
{
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src)
{
	if (this != &src)
		data = src.data;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const BitcoinExchange &be)
{
	typedef std::map<std::string, float> map;


	for (map::size_type i = 0; i < be.data_size(); i++)
	{
		os << "Key: " << be[i]->first << " ";
		os << "Value: " << be[i]->second;
		os << std::endl;
	}
	return os;
}

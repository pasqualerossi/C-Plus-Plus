#include "PmergeMe.hpp"
#include <ctime>
#include <time.h>

int main(int argc, const char *argv[])
{
	/*containers*/
	std::vector<int> vector_container;
	std::list<int> list_container;
	/*time calculations*/
	std::clock_t start;
	std::clock_t finish;

	if (argc < 2)
	{
		std::cout << "Need at least one argument for the program" << std::endl;
		return 0;
	}
	try {
		vector_container = build_container<std::vector<int> >(&argv[1]);
	} catch (int err_code) {
		std::cout << "Error" <<std::endl;
		return 0;
	}
	std::cout << "Before: " << vector_container << std::endl;
	mergeInsertSort(vector_container);
	std::cout << "After: " << vector_container << std::endl;

	/*Vector container sort*/
	start = std::clock();
	vector_container = build_container<std::vector<int> >(&argv[1]);
	mergeInsertSort(vector_container);
	finish = std::clock();
	std::cout << "Time to process a range of 5 elements with std::vector<int>: "
		<< (float)(finish - start)/CLOCKS_PER_SEC * 1000000 << " us" << std::endl;

	/*list contaner sort*/
	start = std::clock();
	list_container = build_container<std::list<int> >(&argv[1]);
	mergeInsertSort(vector_container);
	finish = std::clock();
	std::cout << "Time to process a range of 5 elements with std::list<int>: "
		<< (float)(finish - start)/CLOCKS_PER_SEC * 1000000 << " us" << std::endl;
}

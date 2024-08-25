/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:42:29 by ddavlety          #+#    #+#             */
/*   Updated: 2024/08/25 13:42:29 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <deque>
# include <iostream>
# include <sstream>
# include <ostream>

template <typename Container>
bool find_duplicate(const Container &nums, int new_value)
{
	for (size_t i = 0; i < nums.size(); ++i)
	{
		if (nums[i] == new_value)
			return true;
	}
	return false;
}

template <typename Container>
void mergeInsertSort(Container &nums)
{
	if (nums.size() <= 1)
		return ;

	Container left(nums.begin(), nums.begin() + nums.size() / 2);
	Container right(nums.begin() + nums.size() / 2, nums.end());

	mergeInsertSort(left);
	mergeInsertSort(right);

	typename Container::iterator leftIt = left.begin();
	typename Container::iterator rightIt = right.begin();
	typename Container::iterator numsIt = nums.begin();

	while (leftIt != left.end() && rightIt != right.end())
	{
		if (*leftIt < *rightIt)
			*numsIt++ = *leftIt++;
		else
			*numsIt++ = *rightIt++;
	}

	while (leftIt != left.end())
	{
		*numsIt++ = *leftIt++;
	}
	while (rightIt != right.end())
	{
		*numsIt++ = *rightIt++;
	}
}

template <typename Container>
Container build_container(const char **args)
{
	Container container;
	for (int i = 0; args[i]; ++i)
	{
		int entry;
		std::stringstream ss(args[i]);
		ss >> entry;
		if (ss.fail())
			throw 42;
		if (find_duplicate(container, entry) || entry < 0)
			throw 41;
		container.push_back(entry);
	}
	return container;
}

std::ostream &operator<<(std::ostream &os, const std::vector<int> &container);

std::ostream &operator<<(std::ostream &os, const std::deque<int> &container);

#endif

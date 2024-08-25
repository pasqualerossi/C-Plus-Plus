/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:42:26 by ddavlety          #+#    #+#             */
/*   Updated: 2024/08/25 13:42:27 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::ostream &operator<<(std::ostream &os, const std::vector<int> &container)
{
	for (std::vector<int>::const_iterator it = container.begin(); it != container.end(); it++)
	{
		os << *it << " ";
	}
	return os;
}

std::ostream &operator<<(std::ostream &os, const std::deque<int> &container)
{
	for (std::deque<int>::const_iterator it = container.begin(); it != container.end(); it++)
	{
		os << *it << " ";
	}
	return os;
}

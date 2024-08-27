/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddavlety <ddavlety@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:42:26 by ddavlety          #+#    #+#             */
/*   Updated: 2024/08/27 11:22:22 by ddavlety         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

std::ostream &operator<<(std::ostream &os, const std::vector<int> &container){
	for (std::vector<int>::const_iterator it = container.begin(); it != container.end(); it++)
	{
		os << *it << " ";
	}
	return os;
}

std::ostream &operator<<(std::ostream &os, const std::list<int> &container){
	for (std::list<int>::const_iterator it = container.begin(); it != container.end(); it++)
	{
		os << *it << " ";
	}
	return os;
}

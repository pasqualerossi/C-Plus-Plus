/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:55:07 by prossi            #+#    #+#             */
/*   Updated: 2022/08/01 11:41:16 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void times_two(int const &n) 
{
    std::cout << n * 2 << std::endl;
}

void print(std::string const &s) 
{
    std::cout << s << std::endl;
}

int main(void) 
{
    int array[] = {1, 2, 3, 4, 5};

    ::iter(array, 5, times_two);

    std::string strings[] = {"s1", "s2", "s3"};

    ::iter(strings, 3, print);
}

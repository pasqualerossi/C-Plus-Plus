/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:23:35 by prossi            #+#    #+#             */
/*   Updated: 2022/08/02 19:20:52 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdio.h>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "address in memory of the string : " << (void*)&str[0] << std::endl;
    std::cout << "address of the string using stringPTR : " << stringPTR << std::endl;
    std::cout << "address of the string using stringREF : " << &stringREF << std::endl;

    std::cout << "string data using stringPTR : " << *stringPTR << std::endl;
    std::cout << "string data using stringREF : " << stringREF << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:49:36 by prossi            #+#    #+#             */
/*   Updated: 2022/08/01 11:25:07 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

Base::~Base() {}

Base* generate() 
{
	std::srand(time(NULL));

	int n = rand() % 3;
	switch (n) {
		case 0:
			std::cout << "generated an A class" << std::endl;
			return new A;
		case 1:
			std::cout << "generated an B class" << std::endl;
			return new B;
		case 2:
			std::cout << "generated an C class" << std::endl;
			return new C;
	}

	std::cout << "some very weird error ocurred: can't generate a class" << std::endl;
	return NULL;
}

void identify(Base* p) 
{
	if (dynamic_cast<A*>(p) != NULL) 
	{
		std::cout << "A class was identified" << std::endl;
	} 
	else if (dynamic_cast<B*>(p) != NULL) 
	{
		std::cout << "B class was identified" << std::endl;
	} 
	else if (dynamic_cast<C*>(p) != NULL) 
	{
		std::cout << "C class was identified" << std::endl;
	} 
	else 
	{
		std::cout << "Can't identify the class" << std::endl;
	}
}

void identify(Base& p) 
{
	try 
	{
		A& aux = dynamic_cast<A&>(p); (void)aux;
		std::cout << "A class was identified" << std::endl;
		return;
	} 
	
	catch (...) {}

	try 
	{
		B& aux = dynamic_cast<B&>(p); (void)aux;
		std::cout << "B class was identified" << std::endl;
		return;
	} 
	
	catch (...) {}

	try 
	{
		C& aux = dynamic_cast<C&>(p); (void)aux;
		std::cout << "C class was identified" << std::endl;
		return;
	} 
	
	catch (...) {}

	std::cout << "Can't identify the class" << std::endl;
}

int main() 
{
	Base *base;

	base = generate();
	identify(base);
	identify(*base);

	return 0;
}
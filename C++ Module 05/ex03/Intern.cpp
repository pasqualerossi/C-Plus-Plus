/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:06:25 by prossi            #+#    #+#             */
/*   Updated: 2022/08/01 10:11:01 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() 
{
    this->forms[0] = new ShrubberyCreationForm();
    this->forms[1] = new RobotomyRequestForm();
    this->forms[2] = new PresidentialPardonForm();
};

Intern::Intern(Intern const & src) 
{
    (void) src;

    this->forms[0] = new ShrubberyCreationForm();
    this->forms[1] = new RobotomyRequestForm();
    this->forms[2] = new PresidentialPardonForm();
};

Intern::~Intern() 
{
    delete forms[0];
    delete forms[1];
    delete forms[2];
};

Intern & Intern::operator=(Intern const & obj) 
{
    (void) obj;
    return *this;
}

const char * Intern::FromNotFound::what() const throw() 
{
    return "From Not Found";
}

Form * Intern::makeForm(std::string Type, std::string Target) 
{
    std::string froms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    
	int i = 0;
    for (; i < 3 && Type != froms[i]; i++);
    return i < 3 ? forms[i]->clone(Target) : throw Intern::FromNotFound();
}
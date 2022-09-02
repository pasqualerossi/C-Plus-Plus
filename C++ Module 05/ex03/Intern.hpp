/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:06:37 by prossi            #+#    #+#             */
/*   Updated: 2022/08/01 10:11:41 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern 
{
    public:

        Intern();
        Intern(Intern const & src);
        ~Intern();

        Intern & operator=(Intern const & obj);

        Form * makeForm(std::string Type, std::string Target);

        class FromNotFound : public std::exception 
		{
            public:
                const char *what() const throw();
        };
    
	private:

        Form *forms[3];
};

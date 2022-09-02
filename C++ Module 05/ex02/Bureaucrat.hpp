/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:36:42 by prossi            #+#    #+#             */
/*   Updated: 2022/08/01 09:56:31 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

#define LOWEST 150
#define HIGHEST 1

class Bureaucrat 
{
    public:

        Bureaucrat();
        Bureaucrat(std::string Name, int Grade);
        Bureaucrat(Bureaucrat const & src);
        ~Bureaucrat();

        Bureaucrat & operator=(Bureaucrat const & obj);

        std::string getName() const;
        int         getGrade() const;

        void incrementGrade();
        void decrementGrade();
        void signForm(Form & form);
        void executeForm(Form const & form);

        class GradeTooHighException : public std::exception 
		{
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception 
		{
            public:
                const char *what() const throw();
        };
    
	private:

        std::string const Name;
        int         Grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj);

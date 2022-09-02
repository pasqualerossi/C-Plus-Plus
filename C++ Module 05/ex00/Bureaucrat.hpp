/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:36:42 by prossi            #+#    #+#             */
/*   Updated: 2022/08/01 09:32:53 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

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

        class GradeTooHighException : public std::exception {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception {
            public:
                const char *what() const throw();
        };

    private:

        std::string const Name;
        int         Grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj);

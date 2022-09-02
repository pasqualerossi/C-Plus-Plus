/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:33:07 by prossi            #+#    #+#             */
/*   Updated: 2022/08/04 17:11:21 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():Name("none") 
{
    this->Grade = LOWEST;
}

Bureaucrat::Bureaucrat(std::string Name, int Grade):Name(Name) 
{
    if (Grade < HIGHEST)
        throw Bureaucrat::GradeTooHighException();
    if (Grade > LOWEST)
        throw  Bureaucrat::GradeTooLowException();
    this->Grade = Grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) 
{
    *this = src;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & obj) 
{
    if (obj.Grade < HIGHEST)
        throw Bureaucrat::GradeTooHighException();
    if (obj.Grade > LOWEST)
        throw  Bureaucrat::GradeTooLowException();
    this->Grade = obj.Grade;
    return *this;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & obj) 
{
    o << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return o;
}

std::string Bureaucrat::getName() const 
{
    return this->Name;
}

int Bureaucrat::getGrade() const 
{
    return this->Grade;
}

void Bureaucrat::incrementGrade() 
{
    this->Grade--;
    if (this->Grade < HIGHEST)
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade() 
{
    this->Grade++;
    if (this->Grade > LOWEST)
        throw  Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form & form) 
{
    try 
    {
        form.beSigned(*this);
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    }
    catch (std::exception & e) 
    {
        std::cout << this->getName() << " couldn’t sign "
                  << form.getName() << " because " << e.what() << std::endl; 
    }
}

void Bureaucrat::executeForm(Form const & form) 
{
    try 
    {
        form.execute(*this);
    }
    catch (std::exception & e) 
    {
        std::cout << this->getName() << " couldn't execute "
                  << form.getName() << " because " << e.what() << std::endl;
    }
}

const char * Bureaucrat::GradeTooHighException::what() const throw() 
{
    return "TooHighException";
}

const char * Bureaucrat::GradeTooLowException::what() const throw() 
{
    return "TooLowException";
}

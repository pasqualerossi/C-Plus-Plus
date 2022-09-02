/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 10:19:25 by prossi            #+#    #+#             */
/*   Updated: 2022/08/01 10:20:44 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():Name("none"), GradeToSign(1), GradeToExecute(1) 
{
    this->IsSigned = false;
}

Form::Form(std::string Name, int Sing, int Execute):Name(Name), GradeToSign(Sing), GradeToExecute(Execute) 
{
    if (this->GradeToSign < HIGHEST || this->GradeToExecute < HIGHEST)
        throw Form::GradeTooHighException();
    if (this->GradeToSign > LOWEST || this->GradeToExecute > LOWEST)
        throw  Form::GradeTooLowException();
    this->IsSigned = false;
}

Form::Form(Form const & src):Name(src.Name), GradeToSign(src.GradeToSign), GradeToExecute(src.GradeToExecute) 
{
    *this = src;
}

Form::~Form() {}

std::string Form::getName() const 
{
    return this->Name;
}

bool Form::getIsSigned() const 
{
    return this->IsSigned;
}

int  Form::getGradeToSign() const 
{
    return this->GradeToSign;
}

int  Form::getGradeToExecute() const 
{
    return this->GradeToExecute;
}

void Form::beSigned(Bureaucrat & bureaucrat) 
{
    if (bureaucrat.getGrade() > this->getGradeToSign())
        throw Form::GradeTooLowException();
    this->IsSigned = true;
}

void Form::execute(Bureaucrat const & executor) const 
{
    if (executor.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();
    if (!this->getIsSigned()) {
        std::cout << "couldn't execute form because it's not signed" << std::endl;
        return ;
    }
    this->action();
    std::cout << executor.getName() << " executed " << this->getName() << std::endl;
}

Form & Form::operator=(Form const & obj) 
{
    if (this->GradeToSign < HIGHEST || this->GradeToExecute < HIGHEST)
        throw Form::GradeTooHighException();
    if (this->GradeToSign > LOWEST || this->GradeToExecute > LOWEST)
        throw  Form::GradeTooLowException();
    this->IsSigned = obj.IsSigned;
    return *this;
}

std::ostream & operator<<(std::ostream & o, Form const & obj) 
{
    o << "name: " << obj.getName() << std::endl
      << "is signed: " << (obj.getIsSigned() ? "yes" : "no") << std::endl
      << "grade to sign: " << obj.getGradeToSign() << std::endl
      << "greade to execute: " << obj.getGradeToExecute() << std::endl;
    return o;
}

const char * Form::GradeTooHighException::what() const throw() 
{
    return "Grade Too High";
}

const char * Form::GradeTooLowException::what() const throw() 
{
    return "Grade Too Low";
}

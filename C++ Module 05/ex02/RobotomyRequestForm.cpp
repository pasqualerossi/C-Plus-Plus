/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:58:28 by prossi            #+#    #+#             */
/*   Updated: 2022/08/01 09:59:46 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("RobotomyRequestForm", 72, 45) 
{
    this->Target = "none";
}

RobotomyRequestForm::RobotomyRequestForm(std::string Target):Form("RobotomyRequestForm", 72, 45) 
{
    this->Target = Target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src):Form("RobotomyRequestForm", 72, 45) 
{
    this->Target = src.Target;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & obj) 
{
    this->Target = obj.Target;
    return *this;
}

void RobotomyRequestForm::action() const 
{
    srand((long) this);
    if (rand() & 1) 
	{
        std::cout << "RIZZZZZZZZZZZZZZ..." << std::endl
                  << this->Target << " has been robotomized successfully." << std::endl;
    }
    else 
	{
        std::cout << this->Target << " robotomy failed." << std::endl;
    }
}

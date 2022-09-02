/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 18:00:34 by prossi            #+#    #+#             */
/*   Updated: 2022/08/01 09:58:24 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():Form("PresidentialPardonForm", 25, 5) 
{
    this->Target = "none";
}

PresidentialPardonForm::PresidentialPardonForm(std::string Target):Form("PresidentialPardonForm", 25, 5) 
{
    this->Target = Target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src):Form("PresidentialPardonForm", 25, 5) 
{
    this->Target = src.Target;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & obj) 
{
    this->Target = obj.Target;
    return *this;
}

void PresidentialPardonForm::action() const 
{
    std::cout << this->Target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

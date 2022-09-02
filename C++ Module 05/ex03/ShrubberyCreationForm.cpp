/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:57:27 by prossi            #+#    #+#             */
/*   Updated: 2022/08/01 10:29:43 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm", 145, 137) 
{
    this->Target = "none";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target):Form("ShrubberyCreationForm", 145, 137) 
{
    this->Target = Target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src):Form("ShrubberyCreationForm", 145, 137) 
{
    this->Target = src.Target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & obj) 
{
    this->Target = obj.Target;
    return *this;
}

void ShrubberyCreationForm::action() const 
{
    // draw ascii tree:
    std::ofstream outFile(this->Target + "_shrubbery");
    if (!outFile) 
	{
        std::cerr << "can't open/create" << this->Target + "" << std::endl;
        return ;
    }
    outFile << 
    "            # #### ####\n"
    "        ### \\/#|### |/####\n"
    "        ##\\/#/ \\||/##/_/##/_#\n"
    "       ###  \\/###|/ \\/ # ###\n"
    "    ##_\\_#\\_\\## | #/###_/_####\n"
    "    ## #### # \\ #| /  #### ##/##\n"
    "    __#_--###`  |{,###---###-~\n"
    "                \\ }{\n"
    "                }}{\n"
    "                }}{\n"
    "            ejm  {{}\n"
    "        , -=-~{ .-^- _\n"
    "                `}\n"
    "                 {"
    << std::endl;
}

Form * ShrubberyCreationForm::clone(std::string Target) 
{
    return new ShrubberyCreationForm(Target);
}

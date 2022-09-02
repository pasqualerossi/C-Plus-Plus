/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:32:17 by prossi            #+#    #+#             */
/*   Updated: 2022/08/04 17:03:17 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Forms.hpp"

int main(void) 
{
    try 
    {
        Forms form1("Player Contract", 150, 150);
        bureucrat bCrat1("Richarlison", 1);
        form1.setSignature(bCrat1);
        std::cout << "Welcome to the Club" << std::endl;
        bCrat1.incrementGrade(); 
    }
    catch (std::exception &e) 
    {
        std::cout << "About to print the exception" << std::endl;
        std::cout << e.what() << std::endl;
    }
  
    std::cout  << "<<<<<<<<<<<<>>>>>>>>>>>" << std::endl;
    try 
    {
        Forms form1("Drivers License", 1, 1);
        std::cout << form1;
        bureucrat bCrat1("Caitlyn Jenner", 150);
        form1.setSignature(bCrat1);
    }
    catch (std::exception &e) 
    {
        std::cout << "About to print the exception" << std::endl;
        std::cout << e.what() << std::endl;
    }

    std::cout << "<<<<<<<<<<<<<>>>>>>>>>>>>>" << std::endl;
    Forms form1;
    Forms pContract("PlayerContract", 1, 1);
    Forms pApplication("Passport Application", 150, 150);
    Forms copyApplication(pApplication);
    
    std::cout << form1;
    form1 = pContract;
    std::cout << "Uknown Form should become a Player Contract now" << std::endl;
    std::cout << form1;
    std::cout << "<<<<<<<<<<<<<>>>>>>>>>>>>>" << std::endl;
    std::cout << copyApplication;
}
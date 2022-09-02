/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Forms.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:41:46 by prossi            #+#    #+#             */
/*   Updated: 2022/08/04 17:03:37 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMS_HPP
# define FORMS_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Forms {
    private:
        std::string  _name;
        bool                _isSigned;
        int           _gradeLevelSign;
        int           _gradeLevelExecution;

        public:

            Forms(void);
            Forms(const std::string name, int signGrade, int execGrade);
            Forms(Forms const &oldForm);
       
            ~Forms(void);
        
            Forms &operator=(Forms const &toCopy);
        
            std::string getName(void) const;
            int getSignGrade(void) const;
            int getExecGrade(void) const;
            void setSignature(bureucrat const &bCrat);
        
            std::string isSigned(void) const;
        
        class gradeTooHighException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
        class gradeTooLowException: public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};
    std::ostream &operator<<(std::ostream &out, Forms const &obj);

#endif
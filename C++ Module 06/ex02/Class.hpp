/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:49:49 by prossi            #+#    #+#             */
/*   Updated: 2022/08/01 11:25:09 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS
# define CLASS

# include <iostream>
# include <cstdlib>

class Base 
{
	public:

		virtual ~Base();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif
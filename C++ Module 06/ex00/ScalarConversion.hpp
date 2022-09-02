/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 15:45:29 by prossi            #+#    #+#             */
/*   Updated: 2022/08/05 13:03:22 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP_
# define SCALAR_HPP_

# include <string>

class Scalar 
{
	public:

		~Scalar();

		static void convert(const std::string& literal);
	
	private:

		Scalar();
		Scalar(const Scalar& other);
		Scalar& operator=(const Scalar& other);
};

#endif
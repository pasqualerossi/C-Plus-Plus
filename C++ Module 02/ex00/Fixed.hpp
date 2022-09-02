/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:33:25 by prossi            #+#    #+#             */
/*   Updated: 2022/07/28 12:10:12 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	private:
		int					_RawBits;
		static const int	_bits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &f);
		~Fixed();
		Fixed	&operator=(const Fixed &f2);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif
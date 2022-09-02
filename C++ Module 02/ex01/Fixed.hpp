/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:34:05 by prossi            #+#    #+#             */
/*   Updated: 2022/07/28 12:12:57 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					_RawBits;
		static const int	_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &f);
		Fixed	&operator=(const Fixed &f2);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		Fixed(const int integer);
		Fixed(const float floating_point);

		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &stream, Fixed const &f);

#endif
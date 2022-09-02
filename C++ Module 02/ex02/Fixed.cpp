/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prossi <prossi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:34:55 by prossi            #+#    #+#             */
/*   Updated: 2022/07/28 12:17:57 by prossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//C++ Module 02 - ex00

Fixed::Fixed() : _RawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed	&Fixed::operator=(const Fixed &f2)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(f2.getRawBits());
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (_RawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_RawBits = raw;
}

//C++ Module 02 - ex01

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(integer << Fixed::_bits);
}

Fixed::Fixed(const float floating_point)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(std::roundf(floating_point * (1 << Fixed::_bits)));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_RawBits / (float)(1 << Fixed::_bits));
}

int		Fixed::toInt(void) const
{
	return (this->_RawBits >> Fixed::_bits);
}

std::ostream	&operator<<(std::ostream &stream, Fixed const &f)
{
	stream << f.toFloat();
	return (stream);
}

//C++ Module 02 - ex02

bool	Fixed::operator>(Fixed const &f) const
{
	if (this->_RawBits > f.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &f) const
{
	if (this->_RawBits < f.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &f) const
{
	if (this->_RawBits >= f.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &f) const
{
	if (this->_RawBits <= f.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &f) const
{
	if (this->_RawBits == f.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &f) const
{
	if (this->_RawBits != f.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed const &f)
{
	this->_RawBits += f.getRawBits();
	return (*this);
}

Fixed	Fixed::operator-(Fixed const &f)
{
	this->_RawBits -= f.getRawBits();
	return (*this);
}

Fixed	Fixed::operator*(Fixed const &f)
{
	this->_RawBits = (this->toFloat() * f.toFloat()) * (1 << _bits);
	return (*this);
}

Fixed	Fixed::operator/(Fixed const &f)
{
	this->_RawBits = (this->toFloat() / f.toFloat()) * (1 << _bits);
	return (*this);
}

Fixed	Fixed::operator++()
{
	this->_RawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	++(*this);
	return (temp);
}

Fixed	Fixed::operator--()
{
	this->_RawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	--(*this);
	return (temp);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}

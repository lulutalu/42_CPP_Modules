/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:26:39 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/28 16:56:18 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->fixNumberValue = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator = (const Fixed &assign)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->fixNumberValue = assign.fixNumberValue;
	return (*this);
}

Fixed::Fixed(const int intToFixedPoint)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixNumberValue = intToFixedPoint << this->nbFractionalBits;
}

Fixed::Fixed(const float floatToFixedPoint)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixNumberValue = (int)roundf(floatToFixedPoint * (1 << this->nbFractionalBits));
}

std::ostream	&operator << (std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fixNumberValue / (1 << this->nbFractionalBits));
}

int		Fixed::toInt(void) const
{
	return ((int)this->fixNumberValue >> this->nbFractionalBits);
}

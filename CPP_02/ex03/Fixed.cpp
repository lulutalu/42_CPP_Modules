/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:26:39 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/29 19:04:07 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

////////////////////////////////////////////////////////////////////////////////
////////////////////////	Constructors and Destructor		////////////////////
////////////////////////////////////////////////////////////////////////////////


Fixed::Fixed(void)
{
	this->fixNumberValue = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed	&Fixed::operator = (const Fixed &assign)
{
	this->fixNumberValue = assign.fixNumberValue;
	return (*this);
}

Fixed::Fixed(const int intToFixedPoint)
{
	this->fixNumberValue = (int)intToFixedPoint << this->nbFractionalBits;
}

Fixed::Fixed(const float floatToFixedPoint)
{
	this->fixNumberValue = (int)roundf(floatToFixedPoint * (1 << this->nbFractionalBits));
}


////////////////////////////////////////////////////////////////////////////////
////////////////////////		Operators Overload			////////////////////
////////////////////////////////////////////////////////////////////////////////


std::ostream	&operator << (std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}

bool	Fixed::operator > (const Fixed &rhs)
{
	return (this->toFloat() > rhs.toFloat());
}

bool	Fixed::operator < (const Fixed &rhs)
{
	return (this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator >= (const Fixed &rhs)
{
	return (this->toFloat() >= rhs.toFloat());
}

bool	Fixed::operator <= (const Fixed &rhs)
{
	return (this->toFloat() <= rhs.toFloat());
}

bool	Fixed::operator == (const Fixed &rhs)
{
	return (this->toFloat() == rhs.toFloat());
}

bool	Fixed::operator != (const Fixed &rhs)
{
	return (this->toFloat() != rhs.toFloat());
}

Fixed	Fixed::operator + (const Fixed &rhs)
{
	Fixed	res;

	res.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (res);
}

Fixed	Fixed::operator - (const Fixed &rhs)
{
	Fixed	res;

	res.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (res);
}

Fixed	Fixed::operator * (const Fixed &rhs)
{
	Fixed res;

	res.setRawBits((this->getRawBits() * rhs.getRawBits()) / (1 << this->nbFractionalBits));
	return (res);
}

Fixed	Fixed::operator / (const Fixed &rhs)
{
	Fixed res;

	res.setRawBits((this->getRawBits() * (1 << this->nbFractionalBits)) / rhs.getRawBits());
	return (res);
}

Fixed	Fixed::operator ++ (void)
{
	this->fixNumberValue++;
	return (*this);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed	res(*this);

	this->fixNumberValue++;
	return (res);
}

Fixed	Fixed::operator -- (void)
{
	this->fixNumberValue--;
	return (*this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	res(*this);

	this->fixNumberValue--;
	return (res);
}


////////////////////////////////////////////////////////////////////////////////
////////////////////////		Member Functions			////////////////////
////////////////////////////////////////////////////////////////////////////////


Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs > rhs)
		return (rhs);
	return (lhs);
}

Fixed	Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	Fixed	res;

	if (lhs.getRawBits() > rhs.getRawBits())
		res.setRawBits(rhs.getRawBits());
	else
		res.setRawBits(lhs.getRawBits());
	return (res);
}

Fixed	&Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

Fixed	Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	Fixed	res;

	if (lhs.getRawBits() > rhs.getRawBits())
		res.setRawBits(lhs.getRawBits());
	else
		res.setRawBits(rhs.getRawBits());
	return (res);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fixNumberValue / (1 << this->nbFractionalBits));
}

int		Fixed::toInt(void) const
{
	return ((int)this->fixNumberValue >> this->nbFractionalBits);
}

void	Fixed::setRawBits(const int raw)
{
	this->fixNumberValue = raw;
}

int		Fixed::getRawBits(void) const
{
	return (this->fixNumberValue);
}

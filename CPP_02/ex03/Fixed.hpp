/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:26:29 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/29 19:04:09 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed
{
	private:
		int					fixNumberValue;
		static const int	nbFractionalBits = 8;
	public:
		////////////////////	Contructors and Destructor	/////////////////////

		Fixed(void);
		Fixed(const Fixed &copy);
		~Fixed(void);
		Fixed(const int intToFixedPoint);
		Fixed(const float floatToFixedPoint);

		///////////////////			Operators overload		/////////////////////

		Fixed	&operator = (const Fixed &assign);

		bool	operator > (const Fixed &rhs);
		bool	operator < (const Fixed &rhs);
		bool	operator >= (const Fixed &rhs);
		bool	operator <= (const Fixed &rhs);
		bool	operator == (const Fixed &rhs);
		bool	operator != (const Fixed &rhs);

		Fixed	operator + (const Fixed &rhs);
		Fixed	operator - (const Fixed &rhs);
		Fixed	operator * (const Fixed &rhs);
		Fixed	operator / (const Fixed &rhs);

		Fixed	operator ++ (void);
		Fixed	operator ++ (int);
		Fixed	operator -- (void);
		Fixed	operator -- (int);

		///////////////////			Member Functions		/////////////////////

		static Fixed	&min(Fixed &lhs, Fixed &rhs);
		static Fixed	min(const Fixed &lhs, const Fixed &rhs);
		static Fixed	&max(Fixed &lhs, Fixed &rhs);
		static Fixed	max(const Fixed &lhs, const Fixed &rhs);

		float		toFloat(void) const;
		int			toInt(void) const;

		void		setRawBits(const int raw);
		int			getRawBits(void) const;
};

std::ostream	&operator << (std::ostream &out, const Fixed &fixed);

#endif

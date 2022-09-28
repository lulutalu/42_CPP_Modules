/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:26:29 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/28 16:56:18 by lduboulo         ###   ########.fr       */
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
		Fixed(void);		//default constructor
		Fixed(const Fixed &copy);	//copy constructor
		~Fixed(void);		//default destructor

		Fixed	&operator = (const Fixed &assign);	//overload operator copy constructor
		Fixed(const int intToFixedPoint);	//constructor with const int parameter
		Fixed(const float floatToFixedPoint);	//constructor with const float parameter

		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator << (std::ostream &out, const Fixed &fixed);

#endif

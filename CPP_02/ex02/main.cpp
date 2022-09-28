/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:49:34 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/28 21:15:55 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	/////////////////	Test from Example		////////////////////////////


	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl << std::endl << std::endl;

	///////////////////////////		More tests		////////////////////////


	std::cout << "Object a value : " << a << std::endl;
	std::cout << "Object b value : " << b << std::endl;

	if (a > b)
		std::cout << "Object a is more than Object b" << std::endl;
	else
		std::cout << "Object a isn't more than Object b" << std::endl;

	if (a < b)
		std::cout << "Object a is less than Object b" << std::endl;
	else
		std::cout << "Object a isn't less than Object b" << std::endl;

	if (a >= b)
		std::cout << "Object a is more or equal than Object b" << std::endl;
	else
		std::cout << "Object a isn't more or equal than Object b" << std::endl;

	if (a <= b)
		std::cout << "Object a is less or equal than Object b" << std::endl;
	else
		std::cout << "Object a isn't less or equal than Object b" << std::endl;

	if (a == b)
		std::cout << "Object a is equal to Object b" << std::endl;
	else
		std::cout << "Object a is not equal to Object b" << std::endl;

	if (a != b)
		std::cout << "Object a is not equal to Object b" << std::endl;
	else
		std::cout << "Object a is equal to Object b" << std::endl;

	Fixed c;

	c = a + b;
	std::cout << "Object a value : " << a << std::endl << "Object b value " << b << std::endl;
	std::cout << "Object c (a + b) value : " << c << std::endl;

	c = c - a;
	std::cout << "Object c value (c - a) : " << c << std::endl;

	Fixed d (2);

	c = c * d;
	std::cout << "Object c value after multiplication by 2 : " << c << std::endl;

	c = c / d;
	std::cout << "Object c value after division by 2 : " << c << std::endl;

	Fixed const x(21);
	Fixed const y(13);

	std::cout << "Object a value : " << a << std::endl << "Object b value : " << b << std::endl;
	std::cout << "Minimum Between a and b : " << Fixed::min(a, b) << std::endl;
	std::cout << "Maximum between a and b : " << Fixed::max(a, b) << std::endl;
	std::cout << "Object x value : " << x << std::endl << "Object y value : " << y << std::endl;
	std::cout << "Minimum between x and y : " << Fixed::min(x, y) << std::endl;
	std::cout << "Maximum between x and y : " << Fixed::max(x, y) << std::endl;

	return (0);
}

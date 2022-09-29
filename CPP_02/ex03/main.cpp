/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:49:34 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/29 19:14:03 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point a (0.0f, 0.0f);
	Point b (5.0f, 0.0f);
	Point c (2.5f, 2.5f);
	Point p1 (0.1f, 0.0f);
	
	std::cout << "--------------------------------------------------------------------------" << std::endl;

	std::cout << a << std::endl << b << std::endl << c << std::endl;
	std::cout << p1 << "\t\t";
	if (bsp(a, b, c, p1))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point isn't inside the triangle" << std::endl;

	std::cout << "--------------------------------------------------------------------------" << std::endl;

	Point p2 (2.5f, 2.5f);

	std::cout << a << std::endl << b << std::endl << c << std::endl;
	std::cout << p2 << "\t\t\t";
	if (bsp(a, b, c, p2))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point isn't inside the triangle" << std::endl;

	std::cout << "--------------------------------------------------------------------------" << std::endl;

	Point p3 (2.5f, 0.1f);

	std::cout << a << std::endl << b << std::endl << c << std::endl;
	std::cout << p3 << "\t\t";
	if (bsp(a, b, c, p3))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point isn't inside the triangle" << std::endl;
																											
	std::cout << "--------------------------------------------------------------------------" << std::endl;

	Point p4 (2.5f, 2.4f);

	std::cout << a << std::endl << b << std::endl << c << std::endl;
	std::cout << p4 << "\t\t";
	if (bsp(a, b, c, p4))
		std::cout << "The point is inside the triangle" << std::endl;
	else
		std::cout << "The point isn't inside the triangle" << std::endl;
																											
	std::cout << "--------------------------------------------------------------------------" << std::endl;

	return (0);
}

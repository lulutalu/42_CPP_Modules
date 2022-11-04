/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:47:30 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/04 09:35:38 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "The number of arguments is incorrect. Only one parameter is correct" << std::endl;
		return (1);
	}

	Conversion	c;

	if (c.isStringInf(argv[1])) {
		std::cout << "char: impossible" << std::endl << "int: impossible" << std::endl;
		if (argv[1][0] == '+')
			std::cout << "float: +inff" << std::endl << "double: +inf" << std::endl;
		else
			std::cout << "float: -inff" << std::endl << "double: -inf" << std::endl;
		return (0);
	}
	else if (c.isStringNan(argv[1])) {
		std::cout << "char: impossible" << std::endl << "int: impossible" << std::endl 
			<< "float: nanf" << std::endl << "double: nan" << std::endl;
		return (0);
	}
	c.stringModifier(argv[1]);
	if (c.stringToInt(argv[1])) {
		std::cout << "char: Non displayable" << std::endl << "int: impossible" << std::endl;
	}
	else {
		if (c.stringToChar()) {
			std::cout << "char: Non displayable" << std::endl << "int: " << c.getInt() << std::endl;
		}
		else {
			std::cout << "char: '" << c.getChar() << "'" << std::endl << "int: " << c.getInt() << std::endl;
		}
	}
	if (c.stringToFloat(argv[1])) {
		std::cout << "float: impossible" << std::endl;
	}
	else {
		std::cout << "float: " << std::fixed << std::setprecision(1) << c.getFloat() << "f" << std::endl;
	}
	if (c.stringToDouble(argv[1])) {
		std::cout << "double: impossible" << std::endl;
	}
	else {
		std::cout << "double: " << std::fixed << std::setprecision(1) << c.getDouble() << std::endl;
	}

	return (0);
}

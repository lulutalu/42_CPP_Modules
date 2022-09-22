/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:52:16 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/22 15:10:18 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR;
	std::string	&stringREF = str;

	stringPTR = &str;
	std::cout << "Memory address of string : "; std::cout << &str << std::endl;
	std::cout << "Memory address of string pointer : "; std::cout << stringPTR << std::endl;
	std::cout << "Memory address of string reference : "; std::cout << &stringREF << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Value of string : "; std::cout << str << std::endl;
	std::cout << "Value of string pointer : "; std::cout << *stringPTR << std::endl;
	std::cout << "Value of string reference : "; std::cout << stringREF << std::endl;
}

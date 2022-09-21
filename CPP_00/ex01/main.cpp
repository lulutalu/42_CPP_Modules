/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:18:57 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/21 15:06:34 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(int argc, char **argv)
{
	std::string	input;
	phoneBook	Book;

	(void)argv;
	if (argc != 1)
	{
		std::cout << "\033[31;1mThis binary doesn't accept arguments\033[0m" << std::endl;
		return (1);
	}
	while (1)
	{
		std::cout << "PhoneBook > ";
		input.clear();
		while (input.length() == 0)
			std::getline(std::cin, input);
		if (input.compare("EXIT") == 0)
			return (0);
		else if (input.compare("ADD") == 0)
		{
			Book.add_contact(Book.getContactNbr());
			Book.contact_n();
		}
		else if (input.compare("SEARCH") == 0)
			Book.search_contact();
	}
}

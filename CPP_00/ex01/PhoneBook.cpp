/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:18:46 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/20 16:32:14 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	phoneBook::add_contact(int i)
{
	std::string	str;

	std::cout << "|||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << "|||  Creation of new contact  |||||" << std::endl;
	std::cout << "|     First Name : ";
	while (str.length() == 0)
		std::getline(std::cin, str);
	Book[i].setFirstName(str);
	str.clear();
	std::cout << "|      Last Name : ";
	while (str.length() == 0)
		std::getline(std::cin, str);
	Book[i].setLastName(str);
	str.clear();
	std::cout << "|       Nickname : ";
	while (str.length() == 0)
		std::getline(std::cin, str);
	Book[i].setNickname(str);
	str.clear();
	std::cout << "|   Phone Number : ";
	while (str.length() == 0)
		std::getline(std::cin, str);
	Book[i].setPhoneNumber(str);
	str.clear();
	std::cout << "| Darkest Secret : ";
	while (str.length() == 0)
		std::getline(std::cin, str);
	Book[i].setDarkestSecret(str);
	std::cout << "|  Contact creation please wait  ||" << std::endl;
	std::cout << "|||||||||||||||||||||||||||||||||||" << std::endl;
}

void	phoneBook::search_contact(void)
{
	int			n = 0;
	std::string	str;

	str = Book[0].getFirstName();
	if (str.empty())
		std::cout << "Please add a contact first" << std::endl;
	else
	{
		std::cout << "|||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
		std::cout << "|  Index   |First Name| Last Name| Nickname |" << std::endl;
		str = Book[n].getFirstName();
	}
}

int		phoneBook::getContactNbr(void)
{
	return (i);
}

void	phoneBook::contact_n(void)
{
	i++;
	if (i > 7)
		i = 0;
}

phoneBook::phoneBook(void)
{
	i = 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:18:46 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/21 15:39:19 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	phoneBook::add_contact(int i)
{	
	std::string	str;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|          Creation of new contact          |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
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
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|           Contact creation over           |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

std::string	phoneBook::stringFormat(std::string str)
{
	if (str.length() >= 10)
	{
		str.resize(9);
		str.append(".");
	}
	else
	{
		while (str.length() != 10)
			str.insert(0, " ");
	}
	return (str);
}

void	phoneBook::printPhoneBook(void)
{
	int			n = 0;
	std::string	str;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|  Index   |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (n < 8)
	{
		if (Book[n].getFirstName().empty())
			break ;
		std::cout << "|         ";
		std::cout << n + 1;
		std::cout << "|";
		str = Book[n].getFirstName();
		std::cout << stringFormat(str);
		std::cout << "|";
		str = Book[n].getLastName();
		std::cout << stringFormat(str);
		std::cout << "|";
		str = Book[n].getNickname();
		std::cout << stringFormat(str);
		std::cout << "|" << std::endl;
		n++;
		std::cout << "---------------------------------------------" << std::endl;
	}
}

void	phoneBook::printContactInformation(int n)
{
	std::string	str;

	str = Book[n - 1].getFirstName();
	if (str.empty())
		std::cout << "Can't find this contact\n" << std::endl;
	else
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|             Contact number ";
		std::cout << n;
		std::cout << "              |" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "| First Name : ";
		std::cout << str << std::endl;
		std::cout << "| Last Name : ";
		str = Book[n - 1].getLastName();
		std::cout << str << std::endl;
		std::cout << "| Nickname : ";
		str = Book[n - 1].getNickname();
		std::cout << str << std::endl;
		std::cout << "| Phone Number : ";
		str = Book[n - 1].getPhoneNumber();
		std::cout << str << std::endl;
		std::cout << "| Darkest Secret : ";
		str = Book[n - 1].getDarkestSecret();
		std:: cout << str << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
}

void	phoneBook::search_contact(void)
{
	std::string	str;
	int			n;

	if (getContactNbr() == 0 && Book[0].getFirstName().empty())
		std::cout << "Please add a contact first" << std::endl;
	else
	{
		printPhoneBook();
		str.clear();
		std::cout << "Please insert the index number of the contact : ";
		while (str.length() == 0)
			std::getline(std::cin, str);
		std::stringstream(str) >> n;
		if (n >= 1 && n <= 8)
			printContactInformation(n);
		else
			std::cout << "Can't find this contact" << std::endl;
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
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|       Welcome to my awesome PhoneBook     |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "| To add a contact : ADD (maximum 8)        |" << std::endl;
	std::cout << "| To see your list of contact : SEARCH      |" << std::endl;
	std::cout << "| To exit the PhoneBook : EXIT              |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

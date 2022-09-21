/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:18:46 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/21 16:40:24 by lduboulo         ###   ########.fr       */
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

void	phoneBook::printPhoneBook(void)
{
	int			n = 0;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|                 Registry                  |" << std::endl;
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
		std::cout << stringFormat(Book[n].getFirstName());
		std::cout << "|";
		std::cout << stringFormat(Book[n].getLastName());
		std::cout << "|";
		std::cout << stringFormat(Book[n].getNickname());
		std::cout << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		n++;
	}
}

void	phoneBook::printContactInformation(int n)
{
	if (Book[n - 1].getFirstName().empty())
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|             Incorrect entry               |" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	else
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|             Contact number ";
		std::cout << n;
		std::cout << "              |" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "| First Name : ";
		std::cout << Book[n - 1].getFirstName() << std::endl;
		std::cout << "| Last Name : ";
		std::cout << Book[n - 1].getLastName() << std::endl;
		std::cout << "| Nickname : ";
		std::cout << Book[n - 1].getNickname() << std::endl;
		std::cout << "| Phone Number : ";
		std::cout << Book[n - 1].getPhoneNumber() << std::endl;
		std::cout << "| Darkest Secret : ";
		std:: cout << Book[n - 1].getDarkestSecret() << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
}

/*String manipulation to align the text to the right in the PhoneBook registry*/
/*Also resize the string if it exceeds 10 characters*/
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

/* Brain of the SEARCH action*/
void	phoneBook::search_contact(void)
{
	std::string	str;
	int			n;

	if (getContactNbr() == 0 && Book[0].getFirstName().empty())
	{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|        Please add a contact first         |" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	else
	{
		printPhoneBook();
		str.clear();
		std::cout << "Contact's index : ";
		while (str.length() == 0)
			std::getline(std::cin, str);
		std::stringstream(str) >> n;
		if (n >= 1 && n <= 8)
			printContactInformation(n);
		else
		{
			std::cout << "---------------------------------------------" << std::endl;
			std::cout << "|             Incorrect entry               |" << std::endl;
			std::cout << "---------------------------------------------" << std::endl;
		}
	}
}

/*Quick manipulation of counter 'i' once it exceeds the 8 contact limit*/
void	phoneBook::contact_n(void)
{
	i++;
	if (i > 7)
		i = 0;
}

int		phoneBook::getContactNbr(void)
{
	return (i);
}

/* Constructor. Used to initilaize (int i) and to print a welcome Message*/
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

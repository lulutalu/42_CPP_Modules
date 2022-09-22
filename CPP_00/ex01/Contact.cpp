/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:56:20 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/22 16:08:57 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	Contact::setFirstName(std::string str)
{
	firstName = str;
}

void	Contact::setLastName(std::string str)
{
	lastName = str;
}

void	Contact::setNickname(std::string str)
{
	nickname = str;
}

void	Contact::setPhoneNumber(std::string str)
{
	phoneNumber = str;
}

void	Contact::setDarkestSecret(std::string str)
{
	darkestSecret = str;
}

std::string	Contact::getFirstName(void)
{
	return (firstName);
}

std::string	Contact::getLastName(void)
{
	return (lastName);
}

std::string	Contact::getNickname(void)
{
	return (nickname);
}

std::string	Contact::getPhoneNumber(void)
{
	return (phoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return (darkestSecret);
}

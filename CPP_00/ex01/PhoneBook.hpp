/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:19:08 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/21 16:38:51 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <sstream>

/*
 * Classes Definition
*/

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		void	setFirstName(std::string str);
		void	setLastName(std::string str);
		void	setNickname(std::string str);
		void	setPhoneNumber(std::string str);
		void	setDarkestSecret(std::string str);

		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickname(void);
		std::string	getPhoneNumber(void);
		std::string	getDarkestSecret(void);
};

class phoneBook
{
	private:
		Contact	Book[8];
		int		i;
	public:
		phoneBook();
		std::string	stringFormat(std::string str);
		void		printPhoneBook(void);
		void		printContactInformation(int n);
		int			getContactNbr(void);
		void		contact_n(void);
		void		add_contact(int i);
		void		search_contact(void);
};

#endif

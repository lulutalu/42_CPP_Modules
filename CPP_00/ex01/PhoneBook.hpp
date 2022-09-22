/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:19:08 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/22 16:09:20 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <sstream>
# include "Contact.hpp"

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

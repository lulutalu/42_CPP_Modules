/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:27:38 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/31 18:14:22 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <iostream>
# include <fstream>

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private :
		std::string		_target;
	public :
		ShrubberyCreationForm(void);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm	&operator = (const ShrubberyCreationForm &assign);

		ShrubberyCreationForm(std::string target);

		std::string		getTarget(void) const;

		void	execute(Bureaucrat const &executor) const;
};

#endif

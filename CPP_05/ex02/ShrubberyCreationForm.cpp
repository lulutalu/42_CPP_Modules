/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:27:38 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/02 17:46:13 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreation", 145, 137), _target("Default")
{
	std::cout << "Default Constructor of ShrubberyCreationForm called" << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Default Destructor of ShrubberyCreationForm called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	*this = copy;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator = (const ShrubberyCreationForm &assign)
{
	if (&assign == this)
		return (*this);
	this->_target = assign.getTarget();
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation", 145, 137), _target(target)
{
	return ;
}

std::string			ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void						ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->isSigned())
	{
		std::ofstream		newFile(this->getTarget());
		for (int i = 0; i < 5; i++)
		{
			newFile << "       _-_" << std::endl <<
			"    /~~   ~~\\" << std::endl << 
			" /~~         ~~\\" << std::endl << 
			"{               }" << std::endl << 
			" \\  _-     -_  /" << std::endl << 
			"   ~  \\ //  ~" << std::endl << 
			"_- -   | | _- _" << std::endl << 
			"  _ -  | |   -_" << std::endl <<
			"      // \\" << std::endl;
		}
		newFile.close();
		std::cout << executor.getName() << " correctly executed " << this->getName() << std::endl;
	}
	else
		std::cout << "Error ! This form is not signed yet" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:27:38 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/31 18:14:22 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("Presidential Pardon", 25, 5), _target("Default")
{
	std::cout << "Default Constructor of PresidentialPardonForm called" << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "Default Destructor of PresidentialPardonForm called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	*this = copy;
}

PresidentialPardonForm	&PresidentialPardonForm::operator = (const PresidentialPardonForm &assign)
{
	if (&assign == this)
		return (*this);
	this->_target = assign.getTarget();
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon", 25, 5), _target(target) 
{
	return ;
}

std::string			PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void						PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->isSigned())
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox on the order of " << executor.getName()<< std::endl;
	else if (!this->isSigned())
		std::cout << "Error ! The form has not been signed yet" << std::endl;
}

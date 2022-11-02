/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 19:27:38 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/02 17:49:19 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("Robotomy Request", 72, 45), _target("Default")
{
	std::cout << "Default Constructor of RobotomyRequestForm called" << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "Default Destructor of RobotomyRequestForm called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	*this = copy;
}

RobotomyRequestForm	&RobotomyRequestForm::operator = (const RobotomyRequestForm &assign)
{
	if (&assign == this)
		return (*this);
	this->_target = assign.getTarget();
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy Request", 72, 45), _target(target)
{
	return ;
}

std::string			RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void						RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->isSigned())
	{
		std::cout << "DRRRRRrrrrrrrrrrrrrr" << std::endl;
		if (rand() % 2)
			std::cout << this->getTarget() << " has been successfully Robotomised by the order of " << executor.getName() << std::endl;
		else
			std::cout << "The Robotomy of " << this->getTarget() << " has failed" << std::endl;
	}
	else
		std::cout << "Error ! This form is not signed yet !" << std::endl;
}

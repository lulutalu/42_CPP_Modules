/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 10:32:25 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/03 11:05:24 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::~Intern(void) {}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern		&Intern::operator = (const Intern &assign)
{
	if (this == &assign)
		return (*this);
	return (*this);
}

Form		*Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string		Forms[] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
	int				i = 0;

	while (i < 3 && Forms[i].compare(formName) != 0)
		i++;
	switch (i)
	{
		case 0 :
			std::cout << "Intern has created ShrubberyCreation form !" << std::endl;
			return (new ShrubberyCreationForm(formTarget));
		case 1 :
			std::cout << "Intern has created RobotomyRequest form !" << std::endl;
			return (new RobotomyRequestForm(formTarget));
		case 2 :
			std::cout << "Intern has created PresidentialPardon form !" << std::endl;
			return (new PresidentialPardonForm(formTarget));
		default :
			std::cout << "The form you asked to the Intern is not valid. Please try again" << std::endl;
	}
	return (NULL);
}

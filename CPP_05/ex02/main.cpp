/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:36:54 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/02 17:47:35 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat	B1("Tanguy", 1);
	Bureaucrat	B2("Petruuuzzi", 137);
	Bureaucrat	B3("Yvvves", 45);

	PresidentialPardonForm	F1("Corne-Muse");
	ShrubberyCreationForm	F2("DIRECTORY");
	RobotomyRequestForm		F3("Sans-Chaise");

	std::cout << "Trying to execute all forms without signing them before hand" << std::endl << std::endl;

	B1.executeForm(F1);
	B2.executeForm(F2);
	B3.executeForm(F3);

	std::cout << "Signing all the Forms" << std::endl << std::endl;

	B1.signForm(F1);
	B2.signForm(F2);
	B3.signForm(F3);

	std::cout << "Executing all the Forms" << std::endl << std::endl;

	B1.executeForm(F1);
	B2.executeForm(F2);
	B3.executeForm(F3);


	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:36:54 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/03 11:05:23 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int	main()
{
	Intern	someIntern;
	Form	*newForm;

	std::cout << "Creating a new Form with the help of an Intern" << std::endl;

	newForm = someIntern.makeForm("Shrubbery Creation", "trees");

	Bureaucrat		qaTester("Pauvret", 1);

	std::cout << std::endl << "Signing and Executing the Form" << std::endl;

	qaTester.signForm(*newForm);
	qaTester.executeForm(*newForm);

	delete newForm;

	std::cout << std::endl << "Creating a new Form with the help of an Intern" << std::endl;

	newForm = someIntern.makeForm("Robotomy Request", "bender");

	std::cout << std::endl << "Signing and Executing the Form" << std::endl;

	qaTester.signForm(*newForm);
	qaTester.executeForm(*newForm);

	delete newForm;

	std::cout << std::endl << "Creating a new Form with the help of an Intern" << std::endl;

	newForm = someIntern.makeForm("Presidential Pardon", "Yvan");

	std::cout << std::endl << "Signing and Executing the Form" << std::endl;

	qaTester.signForm(*newForm);
	qaTester.executeForm(*newForm);

	delete newForm;

	std::cout << std::endl << "Creating an invalid Form with the help of an Intern" << std::endl;

	newForm = someIntern.makeForm("Shruberry Creation", "failed");

	return (0);
}

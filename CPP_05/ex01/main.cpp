/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:36:54 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/31 18:14:21 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Form	f0;
	Form	f1("42", 5, 10);

	std::cout << f0;
	std::cout << std::endl;
	std::cout << f1;

	std::cout << std::endl << "Both of the objects coming should return an exception" << std::endl;
	Form	fexception("Exception", 151, 2);
	Form	fexceptionBis("Exception Bis", 0, 2);
	std::cout << std::endl;

	Bureaucrat	B1("Petruuuuzi", 10);
	Bureaucrat	B2("Benny", 2);

	Form		F1("CV", 5, 5);
	Form		F2("VC", 9, 2);

	B1.signForm(F1);
	B1.signForm(F2);

	B2.signForm(F1);
	B2.signForm(F2);
}

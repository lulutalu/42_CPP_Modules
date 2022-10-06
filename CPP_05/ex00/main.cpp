/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:36:54 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/06 18:04:49 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "Trying to construct two bureaucrat with wrong grade value" << std::endl;

	Bureaucrat Tanguy ("Tanguy", 0);
	Bureaucrat Yvan1 ("Yvan", 151);

	std::cout << "Those constructions should have failed !" << std::endl;
	std::cout << "----------------------------------------" << std::endl;

	Bureaucrat Yvan2 ("Yvan", 1);

	std::cout << Yvan2;

	std::cout << "Trying to increment the Grade of this Bureaucrat" << std::endl;

	Yvan2.incrementGrade();

	std::cout << "The incrementation should have failed" << std::endl;

	std::cout << Yvan2;
	std::cout << "----------------------------------------" << std::endl;

	Bureaucrat b1 (Yvan2);

	std::cout << b1;
	std::cout << "This new Bureaucrat should have the same values" << std::endl;
	std::cout << "----------------------------------------" << std::endl;

	Bureaucrat	b2 ("Low", 150);

	std::cout << b2;

	std::cout << "Trying to decrement the Grade of this Bureaucrat" << std::endl;

	b2.decrementGrade();

	std::cout << "Decrementation of his Grade should have failed" << std::endl;

	std::cout << b2;
	std::cout << "----------------------------------------" << std::endl;

	Bureaucrat	b3 ("Petruuuuuzi", 10);

	std::cout << b3;
	b3.incrementGrade();
	std::cout << b3;
	b3.decrementGrade();
	std::cout << b3;
}

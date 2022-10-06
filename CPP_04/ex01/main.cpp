/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:35:08 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/05 21:22:05 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define N 10

int	main(void)
{

	///////////////////////////		Default test	///////////////////////////

	std::cout << "-------------------- Default Tests  🚧   -------------" << std::endl << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl << "Should contruct 2 Animals, 2 Brains, 1 Dog and 1 Cat" << std::endl << std::endl;

	delete j;//should not create a leak
	delete i;

	std::cout << std::endl << "Should correctly destroy all of the above objects" << std::endl;

	std::cout << std::endl;
	std::cout << "-------------------------------------------------------" << std::endl;

	///////////////////////////////////////////////////////////////////////////

	///////////////////////////		Other test		///////////////////////////

	std::cout << "---------------- Others Tests  🚧   -----------------" << std::endl << std::endl;

	Animal	*animals[N];

	std::cout << "Creation of " << N << "  dogs" << std::endl << std::endl;

	for (int i = 0; i < N / 2; i++)
		animals[i] = new Dog();

	std::cout << std::endl << "Creation of " << N << " cats" << std::endl << std::endl;

	for (int i = N / 2; i < N; i++)
		animals[i] = new Cat();

	std::cout << std::endl << "Verification of Types : " << std::endl << std::endl;

	for (int i = 0; i < N; i++)
	{
		std::cout << "Pos : " << i << " ";
		animals[i]->makeSound();
	}

	std::cout << std::endl << "Destruction of every Animals" << std::endl << std::endl;

	for (int i = 0; i < N; i++)
		delete animals[i];

	return (0);
}

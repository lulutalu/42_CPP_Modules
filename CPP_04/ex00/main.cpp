/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:35:08 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/05 15:33:35 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{

	///////////////////////////		Default test	///////////////////////////

	std::cout << "-------------------- Default Tests  🚧   -------------" << std::endl << std::endl; 

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	std::cout << "Dog object type : " << j->getType() << " " << std::endl;
	std::cout << "Cat object type : " << i->getType() << " " << std::endl << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;

	std::cout << "-------------------------------------------------------" << std::endl;

	///////////////////////////////////////////////////////////////////////////

	///////////////////////////		Wrong classes test	//////////////////////

	std::cout << "--------------- Wrong classes Tests  🚧   -------------" << std::endl << std::endl;

	WrongAnimal	wrongMeta;
	WrongCat	wrongCat;

	std::cout << std::endl;
	
	std::cout << "WrongAnimal object type : " << wrongMeta.getType() << " " << std::endl;
	std::cout << "WrongCat object type : " << wrongCat.getType() << " " << std::endl << std::endl;

	wrongMeta.makeSound();
	wrongCat.makeSound();

	std::cout << std::endl;

	return (0);
}

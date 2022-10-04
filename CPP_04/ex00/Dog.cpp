/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:57:47 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/04 21:32:45 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Constructor of Dog called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "Default Destructor of Dog called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy Constructor of Dog called" << std::endl;
	this->type = copy.getType();
}

Dog	&Dog::operator = (const Dog &assign)
{
	std::cout << "Assignement operator overload of Dog called" << std::endl;
	this->type = assign.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << this->getType() << " : Wooof" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:57:47 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/16 16:07:18 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : _brain(new Brain())
{
	std::cout << "Default Constructor of Dog called" << std::endl;
	this->type = "Dog";
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea("Where's my stick ?", i);
}

Dog::~Dog(void)
{
	std::cout << "Default Destructor of Dog called" << std::endl;
	delete this->_brain;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy Constructor of Dog called" << std::endl;
	this->_brain = NULL;
	*this = copy;
}

Dog	&Dog::operator = (const Dog &assign)
{
	std::cout << "Assignement operator overload of Dog called" << std::endl;
	this->type = assign.getType();
	if (this->_brain != NULL)
		delete this->_brain;
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(assign._brain->getIdea(i), i);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << this->getType() << " : Wooof" << std::endl;
}

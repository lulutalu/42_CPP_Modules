/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:37:24 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/16 16:07:50 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : _brain(new Brain())
{
	std::cout << "Default Constructor of Cat called" << std::endl;
	this->type = "Cat";
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea("What if I break this ?", i);
}

Cat::~Cat(void)
{
	std::cout << "Default Destructor of Cat called" << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy Constructor of Cat called" << std::endl;
	this->_brain = NULL;
	*this = copy;
}

Cat	&Cat::operator = (const Cat &assign)
{
	std::cout << "Assignement operator overload of Cat called" << std::endl;
	this->type = assign.getType();
	if (this->_brain != NULL)
		delete this->_brain;
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(assign._brain->getIdea(i), i);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << this->getType() << " : Meoow" << std::endl;
}

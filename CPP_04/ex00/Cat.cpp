/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:37:24 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/04 21:17:42 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Constructor of Cat called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Default Destructor of Cat called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy Constructor of Cat called" << std::endl;
	this->type = copy.getType();
}

Cat	&Cat::operator = (const Cat &assign)
{
	std::cout << "Assignement operator overload of Cat called" << std::endl;
	this->type = assign.getType();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << this->getType() << " : Meoow" << std::endl;
}

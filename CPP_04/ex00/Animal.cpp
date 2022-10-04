/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:21:42 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/04 21:26:35 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Default Constructor of Animal called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Default Destructor of Animal called" << std::endl;
}

Animal::Animal(const Animal &copy) : type(copy.type)
{
	std::cout << "Copy Constructor of Animal called" << std::endl;
}

Animal	&Animal::operator = (const Animal &assign)
{
	std::cout << "Assignement overload operator of Animal called" << std::endl;
	this->type = assign.getType();
	return (*this);
}

std::string		Animal::getType(void) const
{
	return (type);
}

void			Animal::setType(const std::string _type)
{
	this->type = _type;
}

void			Animal::makeSound(void) const
{
	std::cout << this->getType() << " : I don't possess any sound" << std::endl;
}

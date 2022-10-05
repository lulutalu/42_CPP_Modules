/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:21:42 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/05 19:25:38 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Aanimal::Aanimal(void) : type("Aanimal")
{
	std::cout << "Default Constructor of Aanimal called" << std::endl;
}

Aanimal::~Aanimal(void)
{
	std::cout << "Default Destructor of Aanimal called" << std::endl;
}

Aanimal::Aanimal(const Aanimal &copy) : type(copy.type)
{
	std::cout << "Copy Constructor of Aanimal called" << std::endl;
}

Aanimal	&Aanimal::operator = (const Aanimal &assign)
{
	std::cout << "Assignement overload operator of Aanimal called" << std::endl;
	this->type = assign.getType();
	return (*this);
}

std::string		Aanimal::getType(void) const
{
	return (type);
}

void			Aanimal::setType(const std::string _type)
{
	this->type = _type;
}

void			Aanimal::makeSound(void) const
{
	std::cout << this->getType() << " : I don't possess any sound" << std::endl;
}

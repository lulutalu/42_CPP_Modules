/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:22:02 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/05 15:31:42 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << "Default Constructor of WrongAnimal called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Default Destructor of WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) : type(copy.type)
{
	std::cout << "Copy Constructor of WrongAnimal called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator = (const WrongAnimal &assign)
{
	std::cout << "Assignement overload operator of WrongAnimal called" << std::endl;
	this->type = assign.getType();
	return (*this);
}

std::string		WrongAnimal::getType(void) const
{
	return (type);
}

void			WrongAnimal::setType(const std::string _type)
{
	this->type = _type;
}

void			WrongAnimal::makeSound(void) const
{
	std::cout << this->getType() << " : I don't possess any wrong sound" << std::endl;
}

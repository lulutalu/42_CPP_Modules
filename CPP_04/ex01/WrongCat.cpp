/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:24:10 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/05 15:25:10 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Default Constructor of WrongCat called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "Default Destructor of WrongCat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "Copy Constructor of WrongCat called" << std::endl;
	this->type = copy.getType();
}

WrongCat	&WrongCat::operator = (const WrongCat &assign)
{
	std::cout << "Assignement operator overload of WrongCat called" << std::endl;
	this->type = assign.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << this->getType() << " : Brekek" << std::endl;
}

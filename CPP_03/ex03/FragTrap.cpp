/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:57:13 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/03 22:41:22 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "Default Constructor of FragTrap called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Default Destructor of FragTrap called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "Copy Constructor of FragTrap called" << std::endl;
	*this = copy;
}

FragTrap	&FragTrap::operator = (const FragTrap &assign)
{
	this->ClapTrap::operator = (assign);
	return (*this);
}

FragTrap::FragTrap(std::string newName)
{
	std::cout << "Constructor with name assignement of FragTrap called" << std::endl;
	this->name = newName;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->name << " is asking for a mental boost High Five !" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:46:32 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/03 15:45:43 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "Default Constructor of ScavTrap called" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Default Destructor of ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "Copy Constructor of ScavTrap called" << std::endl;
	*this = copy;
}

ScavTrap	&ScavTrap::operator = (const ScavTrap &assign)
{
	this->ClapTrap::operator = (assign);
	return (*this);
}

ScavTrap::ScavTrap(std::string newName)
{
	std::cout << "Constructor with name assignement of ScavTrap called" << std::endl;
	this->name = newName;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage !" << std::endl;
		this->energyPoints--;
	}
	else if (this->hitPoints > 0)
		std::cout << "Unfortunately ScavTrap " << this->name << " has ran out of energy points !" << std::endl;
	else
		;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode !" << std::endl;
}

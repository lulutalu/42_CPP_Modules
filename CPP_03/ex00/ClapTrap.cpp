/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:08:06 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/29 21:46:48 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Default Constructor called" << std::endl;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Default Destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string newName)
{
	std::cout << "Name in parameter Constructor called" << std::endl;
	this->name = newName;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &assign)
{
	std::cout << "Assign Constructor called" << std::endl;
	this->name = assign.name;
	this->hitPoints = assign.hitPoints;
	this->energyPoints = assign.energyPoints;
	this->attackDamage = assign.attackDamage;

	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage !" << std::endl;
		this->energyPoints--;
	}
	else if (this->hitPoints > 0)
		std::cout << "Unfortunately ClapTrap " << this->name << " has ran out of energy points !" << std::endl;
	else
		;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " has taken " << amount << " points of damage !" << std::endl;
		this->hitPoints -= amount;
		if (this->hitPoints <= 0)
		{
			std::cout << "Unfortunately ClapTrap " << this->name << " has died after taking too much damage !" << std::endl;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " repaired himself of " << amount << " hit points !" << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
	else if (this->hitPoints > 0)
		std::cout << "Unfortunately ClapTrap " << this->name << " has ran out of energy points !" << std::endl;
	else
		;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:08:06 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/03 22:42:21 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default Constructor of ClapTrap called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Default Destructor of ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(std::string newName)
{
	std::cout << "Name in parameter Constructor of ClapTrap called" << std::endl;
	this->name = newName;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy Constructor of ClapTrap called" << std::endl;
	*this = copy;
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &assign)
{
	std::cout << "Assign Constructor of ClapTrap called" << std::endl;
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
		std::cout << this->name << " has taken " << amount << " points of damage !" << std::endl;
		this->hitPoints -= amount;
		if (this->hitPoints <= 0)
		{
			std::cout << this->name << " has died after taking too much damage !" << std::endl;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << this->name << " repaired himself of " << amount << " hit points !" << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
	else if (this->hitPoints > 0)
		std::cout << "Unfortunately " << this->name << " has ran out of energy points !" << std::endl;
	else
		;
}

void	ClapTrap::printStats(void)
{
	std::cout << "ClapTrap " << this->name << " Stats : " << std::endl;
	std::cout << "HP " << this->hitPoints << std::endl << 
	"EP " << this->energyPoints << std::endl <<
	"AP " << this->attackDamage << std::endl;
}

void	ClapTrap::setName(const std::string newName)
{
	this->name = newName;
}

void	ClapTrap::setAttackDamage(const int ap)
{
	this->attackDamage = ap;
}

std::string		&ClapTrap::getName(void)
{
	return (this->name);
}

int		ClapTrap::getHitPoints(void)
{
	return (this->hitPoints);
}

int		ClapTrap::getEnergyPoints(void)
{
	return (this->energyPoints);
}

int		ClapTrap::getAttackDamage(void)
{
	return (this->attackDamage);
}

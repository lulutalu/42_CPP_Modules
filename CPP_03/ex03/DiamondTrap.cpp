/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:24:22 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/03 22:43:04 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "Default Constructor of DiamondTrap called" << std::endl;
	this->setAttackDamage(30);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Default Destructor of DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "Copy Constructor of DiamondTrap called" << std::endl;
	*this = copy;
}

DiamondTrap	&DiamondTrap::operator = (const DiamondTrap &assign)
{
	this->ClapTrap::operator = (assign);
	return (*this);
}

DiamondTrap::DiamondTrap(std::string newName) : ClapTrap(newName + "_clap_name")
{
	std::cout << "Constructor with name assignement of DiamondTrap called" << std::endl;
	this->name = newName;
	this->setAttackDamage(30);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Am I " << DiamondTrap::name << " or am I " << ClapTrap::getName() << " ?" << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

const std::string	DiamondTrap::getName(void)
{
	return (this->name);
}

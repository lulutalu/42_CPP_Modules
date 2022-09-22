/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:24:16 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/22 18:51:34 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string newName)
{
	this->name = newName;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attack with their ";
	std::cout << *this->weapon << std::endl;
}

void	HumanB::setWeapon(class Weapon weapon)
{
	this->weapon = weapon.getType();
}

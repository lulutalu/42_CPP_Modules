/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:53:29 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/21 19:12:26 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "The Zombie named : "; 
	std::cout << this->name;
	std::cout << " has been deleted" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name;
	std::cout << ": BraiiiiiiiinnnnnnzzZZZZ..." << std::endl;
}

void	Zombie::setName(std::string newName)
{
	this->name = newName;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:29:15 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/22 18:48:15 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newType)
{
	this->type = newType;
}

const std::string	*Weapon::getType(void)
{
	return (&this->type);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:57:32 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/21 19:11:02 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*newZombie;

	newZombie = new Zombie;
	if (!newZombie)
		return (NULL);
	newZombie->setName(name);
	return (newZombie);
}

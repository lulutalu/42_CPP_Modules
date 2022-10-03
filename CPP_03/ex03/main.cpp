/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:26:17 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/03 23:10:57 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	diam1 ("Bicephale");

	std::cout << std::endl << std::endl << std::endl;

	std::cout << diam1.getName() << " HP : " << diam1.getHitPoints() << std::endl << 
	"Energy Points : " << diam1.getEnergyPoints() << std::endl <<
	"Attack Damage : " << diam1.getAttackDamage() << std::endl << std::endl << std::endl;

	diam1.attack("Floor Boss");

	diam1.whoAmI();

	std::cout << std::endl << std::endl << std::endl;

	return (0);
}

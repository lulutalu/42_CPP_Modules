/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:26:17 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/29 21:46:47 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	z1 ("Tanguy");
	ClapTrap	z2 ("Petruuuzi");
	ClapTrap	z3 ("Jerome");

	z1.attack("Creep");
	z2.attack("Creep");
	z3.attack("Creep");

	z1.takeDamage(50);
	z2.takeDamage(2);
	z3.takeDamage(5);

	z1.beRepaired(10);
	z1.attack("Creep");

	z2.beRepaired(2);
	for (int i = 1; i < 12; i++)
		z3.beRepaired(i);

	for (int i = 1; i < 12; i++)
		z2.attack("Creep");

	ClapTrap	z4 ("Punching-Ball");

	z4.takeDamage(9);
	z4.beRepaired(9);
	z4.takeDamage(9);
	z4.beRepaired(20);
	z4.takeDamage(20);
	z4.takeDamage(1);

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:26:17 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/03 15:45:41 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	clap1 ("Minion");
	ScavTrap	scav1 ("Keeper");

	clap1.attack("mob");
	scav1.attack("mob");

	clap1.takeDamage(10); //ClapTrap should die
	scav1.takeDamage(50);
	scav1.takeDamage(49); //ScavTrap should have 1 hp left
	scav1.takeDamage(1);

	clap1.attack("This should failed");
	scav1.attack("This should failed");

	std::cout << std::endl;

	ScavTrap	scav2 ("Knight of Protection");

	scav2.beRepaired(5);
	scav2.guardGate();

	return (0);
}

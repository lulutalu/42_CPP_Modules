/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:26:17 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/03 16:15:54 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	clap1 ("Minion");
	ScavTrap	scav1 ("Keeper");
	FragTrap	frag1 ("Frags");

	clap1.attack("mob");
	scav1.attack("mob");
	frag1.attack("mob");

	clap1.takeDamage(10); //ClapTrap should die
	scav1.takeDamage(50);
	scav1.takeDamage(49); //ScavTrap should have 1 hp left
	scav1.takeDamage(1);
	frag1.takeDamage(99); // FragTrap should have 1 hp left
	frag1.takeDamage(1);

	clap1.attack("This should fail");
	scav1.attack("This should fail");
	frag1.attack("This should fail");

	std::cout << std::endl;

	ScavTrap	scav2 ("Knight of Protection");
	FragTrap	frag2 ("Fraggie");

	scav2.beRepaired(5);
	scav2.guardGate();
	frag2.highFiveGuys();

	return (0);
}

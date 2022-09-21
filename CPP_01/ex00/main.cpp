/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:05:57 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/21 19:13:15 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	randomChump("Petruuuuuzi");
	randomChump("La git");

	Zombie *Jerome = newZombie("Jerome");
	Jerome->announce();
	Zombie *JCVD = newZombie("Jean Claude Van Damne");
	JCVD->announce();

	delete Jerome;
	delete JCVD;
}

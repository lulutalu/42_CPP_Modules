/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:05:57 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/22 14:50:12 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	Zombie	*scndHorde;

	horde = zombieHorde(5, "JCVD");
	scndHorde = zombieHorde(10, "Piscineux");
	for (int i = 0; i < 5; i++)
		horde[i].announce();
	for (int i = 0; i < 10; i++)
		scndHorde[i].announce();
	delete [] horde;
	delete [] scndHorde;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:50:55 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/26 20:02:19 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "I love having XXXXXXXXXL burgers, XXXL Coke and big Diesel 4x4" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I'm sad Donald Trump is no longer the president of the Great United States of America and I'm pro-life" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I'm warning you, if you don't get away from me I'm calling 911" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "\033[3mHello I need your help they're little people of color playing in my neighbor's pool\033[0m" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = 
	{ 
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	void	(Harl::*harlFunctions[])(void) = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	int	i = 0;

	while (level.compare(levels[i]) != 0 && i < 4)
		i++;
	if (i < 4)
		(this->*harlFunctions[i])();
}

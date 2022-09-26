/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:50:55 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/26 20:26:11 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having XXXXXXXXXL burgers, XXXL Coke and big Diesel 4x4" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I'm sad Donald Trump is no longer the president of the Great United States of America and I'm pro-life" << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I'm warning you, if you don't get away from me I'm calling 911" << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "\033[3mHello I need your help they're little people of color playing in my neighbor's pool\033[0m" << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*harlFunctions[])(void) = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	std::string	levels[] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	int	i = 0;

	while (i < 4 && level.compare(levels[i]) != 0)
		i++;

	switch (i)
	{
		case 0:
			(this->*harlFunctions[0])();
			(this->*harlFunctions[1])();
			(this->*harlFunctions[2])();
			(this->*harlFunctions[3])();
			break ;
		case 1:
			(this->*harlFunctions[1])();
			(this->*harlFunctions[2])();
			(this->*harlFunctions[3])();
			break ;
		case 2:
			(this->*harlFunctions[2])();
			(this->*harlFunctions[3])();
			break ;
		case 3:
			(this->*harlFunctions[3])();
			break ;
		default :
			std::cout << "[ Well no surprise there but talking about uninteresting things again ]" << std::endl;
	}
}

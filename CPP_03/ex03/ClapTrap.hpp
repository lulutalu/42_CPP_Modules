/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:00:28 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/03 22:42:19 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	protected:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	public:

		ClapTrap(void);
		~ClapTrap(void);
		ClapTrap(std::string newName);
		ClapTrap(const ClapTrap &copy);
		ClapTrap	&operator = (const ClapTrap &assign);

		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		void			printStats(void);

		std::string		&getName(void);
		int				getHitPoints(void);
		int				getEnergyPoints(void);
		int				getAttackDamage(void);

		void			setName(const std::string newName);
		void			setAttackDamage(const int ap);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:20:09 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/03 22:32:48 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string	name;

	public:
		DiamondTrap(void);
		~DiamondTrap(void);
		DiamondTrap(std::string newName);
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap	&operator = (const DiamondTrap &assign);

		void	whoAmI(void);
		void	attack(const std::string &target);

		const std::string	getName(void);
};

#endif

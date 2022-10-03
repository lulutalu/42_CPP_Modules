/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:46:48 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/03 15:06:27 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap(const ScavTrap &copy);
		ScavTrap	&operator = (const ScavTrap &assign);
		ScavTrap(std::string newName);

		void	attack(const std::string &target);
		void	guardGate(void);
};

#endif

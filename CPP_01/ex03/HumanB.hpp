/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:09:56 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/22 18:49:24 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
	private:
		const std::string		*weapon;
		std::string				name;
	public:
		HumanB(std::string newName);
		~HumanB(void);
		void	attack(void);
		void	setWeapon(class Weapon weapon);
};

#endif

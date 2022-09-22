/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:06:07 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/22 18:50:41 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA
{
	private:
		const std::string		*Weapon;
		std::string				name;
	public:
		HumanA(std::string newName, class Weapon weapon);
		~HumanA(void);
		void	attack(void);
};

#endif

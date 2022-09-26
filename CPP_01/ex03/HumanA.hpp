/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:06:07 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/26 13:36:15 by lduboulo         ###   ########.fr       */
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
		std::string		name;
		Weapon			&weapon;
	public:
		HumanA(std::string newName, Weapon &weapon);
		~HumanA(void);
		void	attack(void);
};

#endif

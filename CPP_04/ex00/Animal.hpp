/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:00:28 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/04 21:33:03 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(const Animal &copy);
		Animal	&operator = (const Animal &assign);

		std::string		getType(void) const;
		void			setType(const std::string _type);

		virtual void	makeSound(void) const;
};

#endif

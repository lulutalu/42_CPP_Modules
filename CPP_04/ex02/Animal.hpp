/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 21:00:28 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/05 19:26:04 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP

# include <iostream>
# include <string>

class Aanimal
{
	protected:
		std::string	type;
	public:
		Aanimal(void);
		virtual ~Aanimal(void);
		Aanimal(const Aanimal &copy);
		Aanimal	&operator = (const Aanimal &assign);

		std::string		getType(void) const;
		void			setType(const std::string _type);

		virtual void	makeSound(void) const = 0;
};

#endif

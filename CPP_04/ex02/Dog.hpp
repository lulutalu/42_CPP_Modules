/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:56:59 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/16 14:29:38 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : virtual public Aanimal
{
	private:
		Brain	*_brain;
	public:
		Dog(void);
		virtual	~Dog(void);
		Dog(const Dog &copy);
		Dog	&operator = (const Dog &assign);

		void			makeSound(void) const;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:35:49 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/05 19:25:57 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Aanimal
{
	private:
		Brain	*_brain;
	public:
		Cat(void);
		virtual ~Cat(void);
		Cat(const Cat &copy);
		Cat	&operator = (const Cat &assign);

		void			makeSound(void) const;
};

#endif

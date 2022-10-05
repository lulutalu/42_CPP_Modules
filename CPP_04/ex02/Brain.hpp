/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:36:23 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/05 17:45:31 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	private:
		std::string		ideas[100];
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain &copy);
		Brain	&operator = (const Brain &assign);

		void		setIdea(std::string _idea, int i);
		std::string	getIdea(int i) const;
};

#endif

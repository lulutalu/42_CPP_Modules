/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:39:06 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/05 17:53:24 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Constructor of Brain called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Default Destructor of Brain called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Copy Constructor of Brain called" << std::endl;
	*this = copy;
}

Brain	&Brain::operator = (const Brain &assign)
{
	std::cout << "Overload assignement of Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->setIdea(assign.getIdea(i), i);
	return (*this);
}

void	Brain::setIdea(std::string _idea, int i)
{
	this->ideas[i] = _idea;
}

std::string	Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}

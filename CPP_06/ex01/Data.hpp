/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp   		                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:19:00 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/04 11:29:59 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <string>
# include <iostream>

class Data
{
	private :
		int		_content;
	public :
		Data(void);
		~Data(void);
		Data(const Data &copy);
		Data	&operator = (const Data &assign);

		void	setContent(int newContent);
		int		getContent(void) const;
};

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);

#endif

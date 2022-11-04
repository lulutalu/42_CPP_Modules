/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:38:09 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/04 11:46:55 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void)
{
	Data		cc;
	Data		*c;
	uintptr_t	a;

	cc.setContent(42);

	std::cout << "Value of content : " << cc.getContent() << std::endl;

	c = &cc;

	std::cout << "Value of pointer before cast : " << c << std::endl;

	a = serialize(&cc);

	c = deserialize(a);

	std::cout << "Value of pointer after cast : " << c << std::endl;
}

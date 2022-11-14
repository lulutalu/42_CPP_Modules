/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:51:38 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/14 15:15:06 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span	a(5);

	a.addNumber(15);
	a.addNumber(1);
	a.addNumber(-5);
	a.addNumber(8);
	a.addNumber(30);

	std::cout << a.shortestSpan() << std::endl;
}

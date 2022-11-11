/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:51:38 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/11 21:05:46 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span	a(3);

	a.addNumber(10);
	a.addNumber(1);
	a.addNumber(4);

	std::cout << a.shortestSpan() << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:51:38 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/14 16:14:39 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span	zero(0);

	std::cout << "Trying to add number in a 0 size container" << std::endl;
	zero.addNumber(34);

	std::cout << "---------------------------------------------------------" << std::endl;

	Span	tooMuch(1);

	std::cout << "Trying to add too much number in a size 1 container" << std::endl;
	tooMuch.addNumber(3);
	std::cout << "One number added" << std::endl;
	tooMuch.addNumber(10);

	std::cout << "---------------------------------------------------------" << std::endl;

	Span	spanException(5);

	spanException.addNumber(10);
	std::cout << "Trying to calculate spans with only 1 number stored" << std::endl;
	{
		int		short_span = spanException.shortestSpan();
		int		long_span = spanException.longestSpan();

		std::cout << short_span << "\t" << long_span << std::endl;
	}

	std::cout << "---------------------------------------------------------" << std::endl;

	Span	spanValues(4);

	spanValues.addNumber(-39);
	spanValues.addNumber(0);
	spanValues.addNumber(48);
	spanValues.addNumber(8);

	std::cout << "Shortest Span should be 8 - 0 so 8" << std::endl;
	std::cout << spanValues.shortestSpan() << std::endl;

	std::cout << "Longest Span should be 48 - (-39) so 87" << std::endl;
	std::cout << spanValues.longestSpan() << std::endl;
}

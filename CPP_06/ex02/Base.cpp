/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 13:34:02 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/08 14:56:35 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(void) {}

Base::~Base(void) {}

Base	*generate(void) {
	int	_rand;

	srand(time(NULL));
	_rand = rand() % 3 + 1;
	switch (_rand)
	{
		case 1 :
			return (new A);
		case 2 :
			return (new B);
		case 3 :
			return (new C);
		default :
			return (NULL);
	}
}

void	identify(Base *p) {
	A	*a;
	B	*b;
	C	*c;

	a = dynamic_cast<A*>(p);
	b = dynamic_cast<B*>(p);
	c = dynamic_cast<C*>(p);
	if (a != nullptr)
		std::cout << "Generated Object from class A with pointer check" << std::endl;
	else if (b != nullptr)
		std::cout << "Generated Object from class B with pointer check" << std::endl;
	else if (c != nullptr)
		std::cout << "Generated Object from class C with pointer check" << std::endl;
}

void	identify(Base &p) {
	A	a;
	B	b;
	C	c;

	try {
		a = dynamic_cast<A&>(p);
		std::cout << "Generated Object from class A with reference check" << std::endl;
	}
	catch (std::bad_cast) {}
	try {
		b = dynamic_cast<B&>(p);
		std::cout << "Generated Object from class B with reference check" << std::endl;
	}
	catch (std::bad_cast) {}
	try {
		c = dynamic_cast<C&>(p);
		std::cout << "Generated Object from class C with reference check" << std::endl;
	}
	catch (std::bad_cast) {}
}

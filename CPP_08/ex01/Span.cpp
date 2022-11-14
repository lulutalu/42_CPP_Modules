/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:40:10 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/14 17:44:04 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

////////////////////////////////////////////////////////////////////////////////
//								Canonical Form								////
////////////////////////////////////////////////////////////////////////////////
Span::Span(void) : _vec(0), _nb(0), _max(0) {}

Span::Span(unsigned int nb) : _vec(nb), _nb(0), _max(nb) {}

Span::~Span(void) {}

Span::Span(const Span &cpy) {
	*this = cpy;
}

Span		*Span::operator = (const Span &assign) {
	if (this == &assign)
		return (this);
	this->_vec = assign._vec;
	this->_nb = assign._nb;
	this->_max = assign._max;
	return (this);
}
////////////////////////////////////////////////////////////////////////////////
//								Vector operation							////
////////////////////////////////////////////////////////////////////////////////
void		Span::addNumber(int newNumber) {
	try {
		if (this->_nb == this->_max)
			throw Span::SpanObjectFull();
		else
			this->_vec[this->_nb++] = newNumber;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void		Span::insert(int _range) {
	srand(time(NULL));
	while (this->_nb < this->_max)
		this->addNumber(rand() % _range);
}

int			Span::shortestSpan(void) const {
	try {
		if (this->_nb < 2)
			throw Span::NotEnoughNumber();
		else {
			std::vector<int>			temp(this->_vec);
			int							short_span;

			std::sort(temp.begin(), temp.begin() + this->_nb);
			short_span = temp[1] - temp[0];
			for (int i = 1; i < this->_nb; i++) {
				if (i + 1 < this->_nb) {
					if (temp[i + 1] - temp[i] < short_span)
						short_span = temp[i + 1] - temp[i];
				}
			}
			return (short_span);
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}

int			Span::longestSpan(void) const {
	try {
		if (this->_nb < 2)
			throw Span::NotEnoughNumber();
		else {
			int	max_value;
			int	min_value;

			max_value = *std::max_element(this->_vec.begin(), this->_vec.begin() + this->_nb);
			min_value = *std::min_element(this->_vec.begin(), this->_vec.begin() + this->_nb);
			return (max_value - min_value);
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
////////////////////////////////////////////////////////////////////////////////
//								Extras										////
////////////////////////////////////////////////////////////////////////////////
void		Span::display(void) {
	for (std::vector<int>::iterator it = this->_vec.begin(); it != this->_vec.end(); it++)
		std::cout << *it << " ";
}
////////////////////////////////////////////////////////////////////////////////
//								Exceptions									////
////////////////////////////////////////////////////////////////////////////////
const char	*Span::NotEnoughNumber::what(void) const throw() {
	return ("Not enough numbers to return a result");
}

const char	*Span::SpanObjectFull::what(void) const throw() {
	return ("This Span object is already full. Adding another number is not possible");
}

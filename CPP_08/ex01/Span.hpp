/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:40:14 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/14 17:38:55 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iterator>
# include <algorithm>
# include <iostream>
# include <cstdlib>
# include <ctime>

class Span
{
	private :
		std::vector<int>	_vec;
		int					_nb;
		int					_max;
	public :
		Span(void);
		~Span(void);
		Span(const Span &cpy);
		Span	*operator = (const Span &assign);

		Span(unsigned int nb);

		void	addNumber(int newNumber);
		void	insert(int _range);

		int		shortestSpan(void) const;
		int		longestSpan(void) const;

		class NotEnoughNumber : public std::exception {
			const char *what() const throw();
		};

		class SpanObjectFull : public std::exception {
			const char *what() const throw();
		};

		void	display(void);
};

#endif

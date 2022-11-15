/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:40:14 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/14 18:30:29 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iterator>
# include <iostream>

template <class T>
class MutantStack : public std::stack<T>
{
    public :
      MutantStack(void) : std::stack<T>() {};
      ~MutantStack(void) {};

      MutantStack(const MutantStack &cpy) : std::stack<T>(cpy) {};
      MutantStack   *operator = (const MutantStack &assign) {
        if (&assign != this)
          *this = assign;
        return (*this);
      };

      typedef typename std::stack<T>::container_type::iterator        iterator;
      typedef typename std::stack<T>::container_type::const_iterator  const_iterator;

      iterator        begin(void) { return (std::stack<T>::c.begin()); };
      iterator        end(void) { return (std::stack<T>::c.end()); };

      const_iterator  begin(void) const { return (std::stack<T>::c.begin()); };
      const_iterator  end(void) const { return (std::stack<T>::c.end()); };
};

#endif

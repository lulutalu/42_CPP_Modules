/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:41:36 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/10 16:44:01 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>

template <class T>
class Array
{
    private :
        T       *_tab;
        int     _size;
    public :
        Array(void);
        ~Array(void);
        Array(const Array &cpy);
        Array   *operator = (const Array &rhs);

        Array(unsigned int size);

        T       &operator [] (int index);

        class OutOfBoundException : public std::exception {
            virtual const char *what() const throw();
        };

        int     size(void) const;
};

#endif

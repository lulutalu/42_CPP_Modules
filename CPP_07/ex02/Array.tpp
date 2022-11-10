/* ****************************************************************************/
/*                                                                            */
/*                                                         :::      ::::::::  */
/*    Array.tpp                                          :+:      :+:    :+:  */
/*                                                     +:+ +:+         +:+    */
/*    By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+       */
/*                                                 +#+#+#+#+#+   +#+          */
/*    Created: 2022/11/08 19:03:44 by lduboulo          #+#    #+#            */
/*    Updated: 2022/11/08 19:10:40 by lduboulo         ###   ########.fr      */
/*                                                                            */
/* ****************************************************************************/

#include "Array.hpp"

template <typename T>
Array<T>::Array(void) : _tab(NULL), _size(0) {}

template <typename T>
Array<T>::~Array(void) {
    if (this->_tab != NULL) {
        delete [] _tab;
        _tab = NULL;
        _size = 0;
    }
}

template <typename T>
Array<T>::Array(const Array<T> &cpy) {
    *this = cpy;    
}

template <typename T>
Array<T>        *Array<T>::operator = (const Array<T> &rhs) {
    if (this == &rhs)
        return (this);
    this->_size = rhs.size();
    this->_tab = new T[this->size()];
    for (int i = 0; i < this->size(); i++)
        this->_tab[i] = rhs._tab[i];
    return (this);
}

template <typename T>
Array<T>::Array(unsigned int size) : _tab (new T[size]), _size(size) {}

template <typename T>
T               &Array<T>::operator [] (int index) {
    try
    {
        if (index < 0 || index >= this->size())
            throw Array<T>::OutOfBoundException();
    }
    catch (std::exception &except) {
        std::cout << except.what();
    }
    return (this->_tab[index]);
}

template <typename T>
const char      *Array<T>::OutOfBoundException::what(void) const throw() {
    return ("Out of Bound access for this array\n");
}

template <typename T>
int             Array<T>::size(void) const {
    return (this->_size);
}

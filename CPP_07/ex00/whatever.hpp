/*******************************************************************************/
//                                                                              /
//                                                         :::      ::::::::    /
//    whatever.hpp                                       :+:      :+:    :+:    /
//                                                     +:+ +:+         +:+      /
//    By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+         /
//                                                 +#+#+#+#+#+   +#+            /
//    Created: 2022/02/27 18:29:51 by lduboulo          #+#    #+#              /
//    Updated: 2022/11/03 13:55:29 by lduboulo         ###   ########.fr        /
//                                                                              /
/*******************************************************************************/

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void    swap(T &a, T &b){
    T   temp = a;

    a = b;
    b = temp;
}

template <typename T>
T   min(T a, T b){
    if (a < b)
        return (a);
    else
        return (b);
}

template <typename T>
T   max(T a, T b){
    if (a > b)
        return (a);
    else
        return (b);
}

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:36:54 by lduboulo          #+#    #+#             */
/*   Updated: 2022/10/06 18:04:49 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

int main(void)
{
    int             a[5] = {1, 5, 3, 2, 9};
    char            b[6] = {'-', '<', '?', '[', ']', '1'};
    long            c[3] = {10, 50, 90};
    double          d[4] = {0, 5, 10, 9};

    std::cout << "Using iter function on int array" << std::endl;
    ::iter(a, 5, &::size);
    std::cout << std::endl << "Using iter function on char array" << std::endl;
    ::iter(b, 6, &::size);
    std::cout << std::endl << "Using iter function on long array" << std::endl;
    ::iter(c, 3, &::size);
    std::cout << std::endl << "Using iter function on double array" << std::endl;
    ::iter(d, 4, &::size);
}

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

#include "whatever.hpp"
#include <iostream>
#include <string>

int main(void)
{
    int a;
    int b;

    a = 6;
    b = 10;

    std::cout << "Int Type Test" << std::endl;
    std::cout << "Value of a : " << a << std::endl;
    std::cout << "Value of b : " << b << std::endl;
    std::cout << "Min of a and b : " << ::min(a, b) << std::endl;
    std::cout << "Max of a and b : " << ::max(a, b) << std::endl;
    std::cout << "Now swapping both of them" << std::endl;
    ::swap(a, b);
    std::cout << "Value of a : " << a << std::endl;
    std::cout << "Value of b : " << b << std::endl << std::endl;

    std::string x;
    std::string y;

    x = "Coucou";
    y = "Coucou, Salut";

    std::cout << "String type test" << std::endl;
    std::cout << "Value of x : " << x << std::endl;
    std::cout << "Value of y : " << y << std::endl;
    std::cout << "Min of x and y : " << ::min(x, y) << std::endl;
    std::cout << "Max of x and y : " << ::max(x, y) << std::endl;
    std::cout << "Now swapping both of them" << std::endl;
    ::swap(x, y);
    std::cout << "Value of x : " << x << std::endl;
    std::cout << "Value of y : " << y << std::endl << std::endl;
}

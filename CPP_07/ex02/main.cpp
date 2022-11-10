/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:25:15 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/10 17:33:20 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int main(void)
{
    Array<int>      int_array(5);
    Array<float>    float_array(5);
    Array<char>     char_array(10);
    char            test[] = "Coucou";

    for (int i = 0; test[i] != '\0'; i++)
        char_array[i] = test[i];

    for (int i = 0; i < char_array.size(); i++)
        std::cout << char_array[i];

    std::cout << std::endl;

    int_array[0] = 2;
    int_array[1] = 4;

    Array<int>      cpy(int_array);

    std::cout << int_array[0] << std::endl;
    std::cout << cpy[0] << std::endl;

    std::cout << "Both those numbers should be equal" << std::endl;

    std::cout << "Trying out of bound assignation" << std::endl;
    float_array[10] = 10.0f;
}

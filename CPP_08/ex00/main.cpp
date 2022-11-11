/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:50:18 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/11 17:09:45 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	myVector;

	myVector.push_back(10);
	myVector.push_back(8);
	myVector.push_back(2);
	myVector.push_back(1);
	myVector.push_back(50);
	myVector.push_back(22);

	std::cout << "Searching for a number not inside the vector container" << std::endl;
	std::cout << easyfind(myVector, 5) << std::endl;

	std::cout << "Searching for a number inside the vector container" << std::endl;
	std::cout << easyfind(myVector, 50) << std::endl;

	std::cout << std::endl << std::endl;

	std::list<int>		myList;

	myList.push_back(3);
	myList.push_back(6);
	myList.push_back(28);
	myList.push_back(10);
	myList.push_back(47);
	myList.push_back(20);
	myList.push_back(1);

	std::cout << "Searching for a number not inside the list container" << std::endl;
	std::cout << easyfind(myList, 2) << std::endl;

	std::cout << "searching for a number inside the list container" << std::endl;
	std::cout << easyfind(myList, 47) << std::endl;
}

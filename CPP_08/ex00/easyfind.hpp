/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:29:44 by lduboulo          #+#    #+#             */
/*   Updated: 2022/11/11 17:09:44 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <vector>
# include <list>
# include <iterator>
# include <iostream>

template <typename T>
int		easyfind(T &container, int toFind) {
	typename T::iterator	iT;

	for (iT = container.begin(); iT != container.end(); iT++) {
		if (*iT == toFind)
			return (toFind);
	}
	std::cout << "No occurence of " << toFind << " has been found" << std::endl;
	return (0);
}

#endif

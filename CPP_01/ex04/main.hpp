/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:52:22 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/26 17:04:20 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iostream>
# include <fstream>
# include <string>

class FileStream
{
	public:
		std::ifstream	baseFileStream;
		std::ofstream	outFileStream;
		std::string		toReplace;
		std::string		howToReplace;

		FileStream(std::string baseFile, std::string setToReplace, std::string setHowToReplace);
		~FileStream(void);
};

#endif

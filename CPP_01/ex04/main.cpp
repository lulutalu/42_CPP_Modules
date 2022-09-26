/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduboulo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:39:14 by lduboulo          #+#    #+#             */
/*   Updated: 2022/09/26 17:04:19 by lduboulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

FileStream::FileStream(std::string baseFile, std::string setToReplace, std::string setHowToReplace)
{
	baseFileStream.open(baseFile);
	outFileStream.open(baseFile.append(".replace"));
	toReplace = setToReplace;
	howToReplace = setHowToReplace;
}

FileStream::~FileStream(void)
{
	baseFileStream.close();
	outFileStream.close();
}

int	args_error(void)
{
	std::cout << "\033[31;1mThis binary need three arguments\033[0m" << std::endl;
	return (1);
}

int	stream_opening_error(void)
{
	std::cout << "\033[31;1mStream opening failed\033[0m" << std::endl;
	return (1);
}

int	main(int argc, char **argv)
{
	std::string		read;
	std::size_t		posFound;

	if (argc != 4)
		return (args_error());

	FileStream	Stream(argv[1], argv[2], argv[3]);

	if (!Stream.outFileStream.is_open() || !Stream.baseFileStream.is_open())
		return (stream_opening_error());
	while (std::getline(Stream.baseFileStream, read))
	{
		posFound = read.find(Stream.toReplace, 0);
		while (posFound != std::string::npos)
		{
			read.erase(posFound, Stream.toReplace.length());
			read.insert(posFound, Stream.howToReplace);
			posFound = read.find(Stream.toReplace, posFound + 1);
		}
		Stream.outFileStream << read << std::endl;
		read.clear();
	}
	return (0);
}

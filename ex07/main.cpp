/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahallain <ahallain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 20:49:12 by ahallain          #+#    #+#             */
/*   Updated: 2021/03/14 00:04:02 by ahallain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int error(std::string command, std::string str, int ret)
{
	std::cerr << command << ": Error: " << str << std::endl;
	return (ret);
}

int main(int argc, char **argv)
{
	if (argc != 4 or !argv[0][0] or !argv[1][0] or !argv[2][0])
		return (error(argv[0], "arguments", 1));

	std::ifstream oldFile(argv[1]);
	if (!oldFile.good())
		return (error(argv[0], "Invalid file", 2));

	std::stringstream stream;
	stream << oldFile.rdbuf();
	std::string content = stream.str();
	if (content.empty())
		return (error(argv[0], "Empty file", 3));

	size_t fromLength = std::string(argv[2]).length();
	size_t toLength = std::string(argv[3]).length();
	size_t position = 0;
	while ((position = content.find(argv[2], position)) != std::string::npos)
	{
		content.replace(position, fromLength, argv[3]);
		position += toLength;
	}

	std::ofstream newfile(std::string(std::string(argv[1]) + ".replace").c_str());
	newfile << content;

	std::cout << "Replaced :D" << std::endl;
	return (0);
}

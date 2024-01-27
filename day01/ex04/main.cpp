/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:40:18 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/26 16:35:47 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdio>
#include <iostream>
#include <fstream>
#include <ostream>
#include <string>

void	MyReplace(std::string& NewLine, std::string Word, std::string Replacer)
{
	int Pos = 0;
	for(int i = 0; NewLine[i]; i++)
	{
		Pos = NewLine.find(Word, Pos);
		if (Pos == -1)
			break;
		NewLine.erase(Pos, Word.length());
		NewLine.insert(Pos, Replacer);
		Pos += Replacer.length();
	}
}

int main(int ac, char **av)
{
	std::string Line;
	std::string OutName;

	if (ac != 4)
	{
		std::cout << "Wrong number of arguments/ should be 4" << std::endl;
		return (1);
	}
	std::ifstream InputFile(av[1]);
	if (InputFile.is_open())
	{
		std::cout<<"file is opened"<<std::endl;
		OutName = std::string(av[1]) + ".replace";
		std::ofstream OutFile(OutName);
		std::getline(InputFile, Line, '\0');
		MyReplace(Line, av[2], av[3]);
		OutFile << Line;
		return (0);
	}
	std::cout<<"File dosent exist!"<<std::endl;
	return (1);
}

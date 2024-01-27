/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:45:43 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/23 13:00:43 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <stdlib.h>

int	PhoneBook::AddFirstName(int index)
{
	std::string line;

	std::cout<<"Enter First Name: ";
	std::getline(std::cin, line);
	if (std::cin.eof())
		exit(1);
	if (!check_empty_input(line))
	{
		std::cout<<"Empty input is not valid!"<<std::endl;
		return (0);
	}
	User[index].SetFirstName(line);
	return (1);
}

int	PhoneBook::AddLastName(int index)
{
	std::string line;

	std::cout<<"Enter Last Name: ";
	std::getline(std::cin, line);
	if (std::cin.eof())
		exit(1);
	if (!check_empty_input(line))
	{
		std::cout<<"Empty input is not valid!"<<std::endl;
		return (0);
	}
	User[index].SetLastName(line);
	return (1);
}

int	PhoneBook::AddNickName(int index)
{
	std::string line;

	std::cout<<"Enter Nick Name: ";
	std::getline(std::cin, line);
	if (std::cin.eof())
		exit(1);
	if (!check_empty_input(line))
	{
		std::cout<<"Empty input is not valid!"<<std::endl;
		return (0);
	}
	User[index].SetNickName(line);
	return (1);
}
int	PhoneBook::AddPhoneNumber(int index)
{
	std::string line;

	std::cout<<"Enter Phone Number: ";
	std::getline(std::cin, line);
	if (std::cin.eof())
		exit(1);
	if (!check_phone_number(line))
	{
		std::cout<<"Invalid phone number (10 digits needed)"<<std::endl;
		return (0);
	}
	User[index].SetPhoneNumber(line);
	return (1);
}

int	PhoneBook::AddDarkestSecret(int index)
{
	std::string line;

	std::cout<<"Enter Darkest Secret Number: ";
	std::getline(std::cin, line);
	if (std::cin.eof())
		exit(0);
	if (!check_empty_input(line))
	{
		std::cout<<"Empty input is not valid!"<<std::endl;
		return (0);
	}
	User[index].SetDarkestSecret(line);
	return (1);
}

void PhoneBook:: Add(int &index, int &AddedConatcts)
{
	std::string str;
	int i = 0;

	while (i < 5)
	{
		if (std::cin.eof())
			exit(1);
		if (i == 0 && AddFirstName(index))
			i++;
		else if (i == 1 && AddLastName(index))
			i++;
		else if (i == 2 && AddNickName(index))
			i++;
		else if (i == 3 && AddPhoneNumber(index))
			i++;
		else if (i == 4 && AddDarkestSecret(index))
			i++;
	}
	index++;
	AddedConatcts++;
}

int check_empty_input(std::string str)
{
	int flag = 0;

	for (int i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			flag = 1;
	}
	return (flag);
}

int	check_phone_number(std::string str)
{
	int i = 0;

	if (str.empty())
		return (0);
	while (str[i])
	{
		if (!std::isdigit(str[i]))
			return (0);
		i++;
	}
	if (str.length() != 10)
		return (0);
	return (1);
}

void	TruncFunction(std::string str)
{
	if (str.length() > 10)
		std::cout<<std::setw(8)<<str.substr(0,9)<<".";
	else
		std::cout<<std::setw(10)<<str<<"";
	std::cout<<"|";
}

int	PhoneBook::PrintContacts(int AddedConatcts)
{
	int i = 0;

	if (User[0].GetFirstName().empty())
	{
		std::cout<<"No Contact is saved Yet"<<std::endl;
		return (0);
	}
	std::cout<<std::setw(10)<<"index"<<"|"<<std::setw(10)<<"fisrt name"<<"|"<<std::setw(10)<<"last name"<<"|"<<std::setw(10)<<"nickname"<<"|"<<std::endl;
	while (i < AddedConatcts && i < 8)
	{
		std::cout<<std::setw(10)<<i + 1<<"|";
		TruncFunction(User[i].GetFirstName());
		TruncFunction(User[i].GetLastName());
		TruncFunction(User[i].GetNickName());
		std::cout<<std::endl;
		i++;
	}
	return (1);
}

void	PhoneBook::Search(int AddedConatcts)
{
	std::string number;
	int			index;

	if (!PrintContacts(AddedConatcts))
		return ;
	std::cout<<"Enter a number from 1->8 to display a contact! : ";
	std::getline(std::cin, number);
	if (std::cin.eof())
		exit(0);
	index = atoi(number.c_str());
	if (index < 1 || index > 8)
	{
		std::cout<<"Range to search a contact is 1->8"<<std::endl;
		return ;
	}
	if (User[index - 1].GetFirstName().empty())
	{
		std::cout<<"contact Not Saved Yet!"<<std::endl;
		return ;
	}
	std::cout<<"First name : "<<User[index - 1].GetFirstName()<<std::endl;
	std::cout<<"Last name : "<<User[index - 1].GetLastName()<<std::endl;
	std::cout<<"Nick name : "<<User[index - 1].GetNickName()<<std::endl;
	std::cout<<"Phone number : "<<User[index - 1].GetPhoneNumber()<<std::endl;
	std::cout<<"Drakest secret : "<<User[index - 1].GetDarkestSecret()<<std::endl;
}

void	PhoneBook::Exit(void)
{
	exit(0);
}

void    cmd_handler(std::string str, PhoneBook &PhoneContact, int &index, int &AddedConatcts)
{
	if (str == "ADD")
		PhoneContact.Add(index, AddedConatcts);
	else if (str == "SEARCH")
		PhoneContact.Search(AddedConatcts);
	else if (str == "EXIT")
		PhoneContact.Exit();
	else
		std::cout<<"Wrong Command, Enter(ADD,SEARCH,EXIT)\n";
}

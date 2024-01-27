/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 03:08:02 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/22 14:20:19 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <string>

int main(void)
{
	PhoneBook PhoneContact;
	std::string str;
	int ContactNumber = 0;
	int	AddedContacts = 0;

	std::cout<<"Enter a command(ADD,SEARCH,EXIT): ";
	while (std::getline(std::cin, str))
	{
		if (std::cin.eof())
			break;
		if (ContactNumber == 8)
			ContactNumber = 0;
		cmd_handler(str, PhoneContact, ContactNumber, AddedContacts);
		std::cout<<"Enter a command(ADD,SEARCH,EXIT): ";
	}
	return (0);
}

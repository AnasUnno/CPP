/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:45:43 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/23 12:59:43 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"
#include <stdlib.h>

class PhoneBook
{
	private:

	Contact User[8];
	int		AddFirstName(int index);
	int		AddLastName(int index);
	int		AddNickName(int index);
	int		AddPhoneNumber(int index);
	int		AddDarkestSecret(int index);
	int		PrintContacts(int AddedConatcts);

	public:

	void	Add(int &index, int &AddedConatcts);
	void	Search(int AddedConatcts);
	void	Exit();
};

void	cmd_handler(std::string str, PhoneBook &PhoneContact, int &index, int &AddedConatct);
int		check_empty_input(std::string str);
int		check_phone_number(std::string str);

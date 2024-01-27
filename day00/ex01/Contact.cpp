/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:30:30 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/21 10:22:08 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>

//setters.

void	Contact::SetFirstName(std::string &first_name)
{
	FirstName = first_name;
}

void	Contact::SetLastName(std::string &last_name)
{
	LastName = last_name;
}

void	Contact::SetNickName(std::string &nick_name)
{
	NickName = nick_name;
}

void	Contact::SetPhoneNumber(std::string &phone_number)
{
	PhoneNumber = phone_number;
}

void	Contact::SetDarkestSecret(std::string &darkest_secret)
{
	DarkestSecret = darkest_secret;
}

//getters.

std::string	&Contact::GetFirstName(void)
{
	return (FirstName);
}

std::string	&Contact::GetLastName(void)
{
	return (LastName);
}

std::string	&Contact::GetNickName(void)
{
	return (NickName);
}

std::string	&Contact::GetPhoneNumber(void)
{
	return (PhoneNumber);
}

std::string	&Contact::GetDarkestSecret(void)
{
	return (DarkestSecret);
}

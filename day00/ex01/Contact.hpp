/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:14:28 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/25 13:09:32 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Contact
{
	private:

	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;
	
	public:

	void			SetFirstName(std::string &fisrt_name);
	void			SetLastName(std::string &last_name);
	void			SetNickName(std::string &nick_name);
	void			SetPhoneNumber(std::string &phone_number);
	void			SetDarkestSecret(std::string &darkest_secret);
	std::string&	GetFirstName(void);
	std::string&	GetLastName(void);
	std::string&	GetNickName(void);
	std::string&	GetPhoneNumber(void);
	std::string&	GetDarkestSecret(void);
};

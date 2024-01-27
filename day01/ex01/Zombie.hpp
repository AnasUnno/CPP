/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:34:22 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/24 17:05:38 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Zombie
{
	private:

	std::string name;

	public:

	Zombie();
	~Zombie();
   void		announce( void );
   void		SetName(std::string ZombieName);
};

Zombie* zombieHorde( int N, std::string name);
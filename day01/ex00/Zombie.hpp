/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:34:22 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/24 16:06:05 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Zombie
{
	private:

	std::string name;

	public:

	Zombie(std::string ZombieName);
	~Zombie();
   void		announce( void );
};

Zombie*	newZombie( std::string name);
void	randomChump( std::string name);

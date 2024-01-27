/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:01:25 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/25 16:36:36 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
	private:

	std::string	name;
	Weapon 		*weapon;

	public:

	HumanB(std::string name);
    void    setWeapon(Weapon& weapon);
	void	attack();
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:01:20 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/25 14:38:15 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanA
{
	private:

	std::string		name;
	Weapon& 		weapon;

	public:

	HumanA(std::string name, Weapon& weapon);
	void	attack();
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:01:30 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/25 14:53:06 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string TypeName)
{
	this->type = TypeName;
}

const   std::string&  Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string name)
{
	this->type = name;
}

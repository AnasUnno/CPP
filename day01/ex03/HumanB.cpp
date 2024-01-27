/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:01:22 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/25 17:58:46 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "HumanA.hpp"
#include "Weapon.hpp"
#include <cstddef>

HumanB::HumanB(std::string name)
{
    this->weapon = NULL;
    this->name = name;
}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack(void)
{
    if (!weapon)
        std::cout<<name<<" attacks with their Default weapon"<<std::endl;
    else
        std::cout<<name<<" attacks with their "<<weapon->getType()<<std::endl;
}

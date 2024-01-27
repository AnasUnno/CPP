/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:01:15 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/25 17:57:09 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon):weapon(weapon)
{
    this->name = name;
}

void    HumanA::attack(void)
{
    std::cout<<name<<" attacks with their "<<weapon.getType()<<std::endl;
}

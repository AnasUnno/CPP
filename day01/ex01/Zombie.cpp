/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:34:37 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/24 17:05:57 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(){}

void    Zombie::SetName(std::string ZombieName)
{
    name = ZombieName;
}

Zombie::~Zombie()
{
    std::cout<<name<<": Destructor called"<<std::endl;
}

void    Zombie::announce( void )
{
    std::cout<<name<<": BraiiiiiiinnnzzzZ.."<<std::endl;
}

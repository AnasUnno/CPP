/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:36:39 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/24 15:25:25 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *Dzombie = newZombie("Dynamic Zombie");
    randomChump("Static Zombie");
    delete Dzombie;
    return (0);
}

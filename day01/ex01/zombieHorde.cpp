/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:10:46 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/25 13:31:00 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* ZombieHorde = new Zombie[N];
    for (int i = 0; i < N; i++)
        ZombieHorde[i].SetName(name);
    return (ZombieHorde);
}

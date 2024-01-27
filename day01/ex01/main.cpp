/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:36:39 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/24 17:03:39 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
   Zombie *Horde = zombieHorde(10, "Glen");
   for (int i =0; i < 10; i++)
        Horde[i].announce();
   delete [] Horde;
    return (0);
}

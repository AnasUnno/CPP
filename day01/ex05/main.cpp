/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 15:39:50 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/27 15:42:15 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout<<"Wrong number of arguments : Need 1(DEBUG, INFO, WARNING, ERROR)"<<std::endl;
        return (1);
    }
    Harl obj;
    obj.complain(av[1]);
    return (0);
}

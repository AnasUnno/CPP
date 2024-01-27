/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:01:33 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/25 15:05:43 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon
{
    private:

    std::string type;

    public:

    Weapon(std::string TypeName);
    const   std::string&  getType();
    void    setType(std::string NewName);
};

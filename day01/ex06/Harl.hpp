/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:32:18 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/26 19:10:52 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Harl
{
    private:

    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    public:

    void complain( std::string level);
};

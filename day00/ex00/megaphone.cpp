/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:17:11 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/16 15:31:04 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	capitaliser(std::string str)
{
	for (int i = 0; str[i]; i++)
		std::cout<<(char)toupper(str[i]);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
		return 0;
	}
	for (int i = 1; av[i]; i++)
		capitaliser(av[i]);
	std::cout<<std::endl;
	return 0;
}

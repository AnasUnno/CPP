/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:07:45 by araji-af          #+#    #+#             */
/*   Updated: 2024/01/25 12:04:50 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string StrVar = "HI THIS IS BRAIN";
    std::string* stringPTR = &StrVar;
    std::string& stringREF = StrVar;

    std::cout<<"The memory address of the string variable : "<<&StrVar<<std::endl;
    std::cout<<"The memory address held by stringPTR : "<<stringPTR<<std::endl;
    std::cout<<"The memory address held by stringREF : "<<&stringREF<<std::endl;
    std::cout<<std::endl;
    std::cout<<"The value of the string variable : "<<StrVar<<std::endl;
    std::cout<<"The value pointed to by stringPTR : "<<*stringPTR<<std::endl;
    std::cout<<"The value pointed to by stringREF : "<<stringREF<<std::endl;
}
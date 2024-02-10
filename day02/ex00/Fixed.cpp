/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:08:39 by araji-af          #+#    #+#             */
/*   Updated: 2024/02/05 15:35:38 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::FracBits = 8;

Fixed::Fixed()
{
    FixedNumber = 0;
    std::cout<<"Default constructor called"<<std::endl;
}

Fixed::~Fixed()
{
    std::cout<<"Destructor called"<<std::endl;
}

void	Fixed::operator=(const Fixed& Original)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    this->FixedNumber = Original.getRawBits();
}

Fixed::Fixed(const Fixed& Original)
{
    std::cout<<"Copy constructor called"<<std::endl;
    operator=(Original);
}

int Fixed::getRawBits(void) const
{
    std::cout<<"getRawBits member function called"<<std::endl;
    return (this->FixedNumber);
}

void    Fixed::setRawBits(int const raw)
{
    this->FixedNumber = raw;
}

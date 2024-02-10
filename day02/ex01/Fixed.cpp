/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:08:39 by araji-af          #+#    #+#             */
/*   Updated: 2024/02/07 16:26:53 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>
#include <ostream>

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
    return (this->FixedNumber);
}

void    Fixed::setRawBits(int const raw)
{
    this->FixedNumber = raw;
}

Fixed::Fixed(const int number)
{
    this->FixedNumber = (number * (1 << this->FracBits));
    std::cout<<"Int constructor called"<<std::endl;
}

Fixed::Fixed(const float number)
{
    this->FixedNumber = roundf(number * (1 << this->FracBits));
    std::cout<<"Float constructor called"<<std::endl;
}

float Fixed::toFloat(void) const
{
    return (float(FixedNumber) / float(256));
}

int Fixed::toInt( void ) const
{
    return (FixedNumber / 256);
}

std::ostream&    operator<<(std::ostream &os, const Fixed& object)
{
    os << object.toFloat();
    return (os);
}

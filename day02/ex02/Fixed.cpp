/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:08:39 by araji-af          #+#    #+#             */
/*   Updated: 2024/02/07 19:40:29 by araji-af         ###   ########.fr       */
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
	// std::cout<<"Default constructor called"<<std::endl;
}

Fixed::~Fixed()
{
	// std::cout<<"Destructor called"<<std::endl;
}

void	Fixed::operator=(const Fixed& Original)
{
	// std::cout<<"Copy assignment operator called"<<std::endl;
	this->FixedNumber = Original.getRawBits();
}

Fixed::Fixed(const Fixed& Original)
{
	// std::cout<<"Copy constructor called"<<std::endl;
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
	// std::cout<<"Int constructor called"<<std::endl;
}

Fixed::Fixed(const float number)
{
	this->FixedNumber = roundf(number * (1 << this->FracBits));
	// std::cout<<"Float constructor called"<<std::endl;
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

bool	Fixed::operator>(const Fixed& Object)const
{
	return (this->FixedNumber > Object.getRawBits());
}

bool	Fixed::operator<(const Fixed& Object)const
{
	return (this->FixedNumber < Object.getRawBits());
}

bool	Fixed::operator>=(const Fixed& Object)const
{
	return (this->FixedNumber >= Object.getRawBits());
}

bool	Fixed::operator<=(const Fixed& Object)const
{
	return (this->FixedNumber <= Object.getRawBits());
}

bool	Fixed::operator==(const Fixed& Object)const
{
	return (this->FixedNumber == Object.getRawBits());
}

bool	Fixed::operator!=(const Fixed& Object)const
{
	return (this->FixedNumber != Object.getRawBits());
}

Fixed	Fixed::operator+(const Fixed& Original)const
{
	Fixed result;

	result.setRawBits((this->FixedNumber + Original.getRawBits()));
	return result;
}

Fixed	Fixed::operator-(const Fixed& Original)const
{
	Fixed result;

	result.setRawBits(this->FixedNumber - Original.getRawBits());
	return result;
}

Fixed	Fixed::operator*(const Fixed& Original)const
{
	Fixed result;

	result.setRawBits((this->FixedNumber * Original.getRawBits()) / 256);
	return result;
}

Fixed	Fixed::operator/(const Fixed& Original)const
{
	Fixed result;

	result.setRawBits((this->FixedNumber / Original.getRawBits()) * 256);
	return result;
}

Fixed&	Fixed::operator++()
{
	this->FixedNumber += 1;
	return (*this);
}

Fixed&	Fixed::operator--()
{
	this->FixedNumber -= 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	copy = Fixed(*this);
	this->FixedNumber += 1;
	return (copy);
}

Fixed	Fixed::operator--(int)
{
	Fixed	copy = Fixed(*this);
	this->FixedNumber -= 1;
	return (copy);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

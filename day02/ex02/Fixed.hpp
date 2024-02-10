/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:08:36 by araji-af          #+#    #+#             */
/*   Updated: 2024/02/07 16:21:21 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <strstream>

class Fixed
{
	private :

	static const int FracBits;
	int	FixedNumber;

	public :

	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed& Orig);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;
	void	operator=(const Fixed& Original);
	bool	operator>(const Fixed& Original)const;
	bool	operator<(const Fixed& Original)const;
	bool	operator>=(const Fixed& Original)const;
	bool	operator<=(const Fixed& Original)const;
	bool	operator==(const Fixed& Original)const;
	bool	operator!=(const Fixed& Original)const;
	Fixed	operator+(const Fixed& Original)const;
	Fixed	operator-(const Fixed& Original)const;
	Fixed	operator*(const Fixed& Original)const;
	Fixed	operator/(const Fixed& Original)const;
	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);
	static Fixed&	min(Fixed& a, Fixed& b);
	static const Fixed&	min(const Fixed& a, const Fixed& b);
	static Fixed&	max(Fixed& a, Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);

};
std::ostream&	operator<<(std::ostream& os, const Fixed& object);

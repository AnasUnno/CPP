/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:08:36 by araji-af          #+#    #+#             */
/*   Updated: 2024/02/06 17:55:46 by araji-af         ###   ########.fr       */
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
	void	operator=(const Fixed& Original);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat( void ) const;
	int		toInt( void ) const;
};
std::ostream&	operator<<(std::ostream& os, const Fixed& object);

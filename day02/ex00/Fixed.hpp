/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:08:36 by araji-af          #+#    #+#             */
/*   Updated: 2024/02/05 15:17:45 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Fixed
{
	private :

	static const int FracBits;
	int	FixedNumber;

	public :

	Fixed();
	Fixed(const Fixed& Orig);
	void	operator=(const Fixed& Original);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};
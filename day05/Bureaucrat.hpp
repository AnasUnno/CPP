/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:58:10 by araji-af          #+#    #+#             */
/*   Updated: 2024/02/23 18:12:26 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

class Bureaucrat
{
	private:

	const std::string Name;
	int	grade;

	public:

	Bureaucrat();
	Bureaucrat(const Bureaucrat& Original);
	void	operator=(const Bureaucrat& Original);
	~Bureaucrat();
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:58:10 by araji-af          #+#    #+#             */
/*   Updated: 2024/02/24 00:31:01 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	private:

	const std::string  Name;
	int	Grade;

	public:

	class GradeTooHighException : public std::exception
	{
		public:

		virtual const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:

		virtual const char* what() const throw();
	};
	Bureaucrat();
	Bureaucrat(int Grade, std::string Name);
	Bureaucrat(const Bureaucrat& Original);
	Bureaucrat&	operator=(const Bureaucrat& Original);
	~Bureaucrat();
	void	increment();
	void	decrement();
	int	getGrade()const;
	std::string	getName()const;
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& object);
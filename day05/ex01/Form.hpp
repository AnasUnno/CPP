/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 00:44:24 by araji-af          #+#    #+#             */
/*   Updated: 2024/02/24 01:46:12 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Form
{
	private:

	bool		sign;
	const int	signGrade;
	const int	execGrade;
	const std::string name;

	public:

	Form();
	Form(std::string Name, int signGrade, int execGrade);
	Form(const Form& Original);
	Form&	operator=(const Form& Original);
	~Form();
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
	std::string getName()const;
	bool	getSign()const;
	int		getSignGrade()const;
	int		getExecGrade()const;
	void	beSigned(Bureaucrat& obj);
	void	signForm();
};

std::ostream&	operator<<(std::ostream& os, const Form& object);

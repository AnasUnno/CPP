/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:57:47 by araji-af          #+#    #+#             */
/*   Updated: 2024/02/24 00:37:42 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	this->Grade = 2;
}

Bureaucrat::Bureaucrat(int grade, std::string name) : Name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->Grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& Original)
{
	this->Grade = Original.getGrade();
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat& Original) : Name(Original.getName())
{
	*this = Original;
}

int	Bureaucrat::getGrade()const
{
	return (this->Grade);	
}

std::string	Bureaucrat::getName()const
{
	return (this->Name);
}

const char*	Bureaucrat::GradeTooHighException::what()const throw()
{
	return ("Grade too hight!!");
}

const char*	Bureaucrat::GradeTooLowException::what()const throw()
{
	return ("Grade too low!!");
}

void	Bureaucrat::increment()
{
	if (this->Grade > 150)
		throw GradeTooLowException();
	if (this->Grade < 1)
		throw GradeTooHighException();
	this->Grade--;
}

void	Bureaucrat::decrement()
{
	if (this->Grade > 150)
		throw GradeTooLowException();
	if (this->Grade < 1)
		throw GradeTooHighException();
	this->Grade++;
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& object)
{
	os << object.getName() << ", bureaucrat grade " << object.getGrade()<<std::endl;
	return (os);
}

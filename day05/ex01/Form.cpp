/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araji-af <araji-af@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 00:48:50 by araji-af          #+#    #+#             */
/*   Updated: 2024/02/24 01:46:48 by araji-af         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <string>

Form::Form() : signGrade(75) , execGrade(75)
{
	this->sign = 0;
}

Form::~Form()
{
}

Form&	Form::operator=(const Form& Original)
{
	this->sign = Original.sign;
	return (*this);
}

Form::Form(const Form& Original) : signGrade(75) , execGrade(75), name(Original.name)
{
	*this = Original;
}

Form::Form(std::string Name, int SignGrade, int ExecGrade) : signGrade(SignGrade) , execGrade(ExecGrade), name(Name)
{
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	this->sign = 0;
}
std::string Form::getName()const
{
	return (this->name);
}

bool	Form::getSign()const
{
	return (this->sign);
}

int	Form::getSignGrade()const
{
	return (this->signGrade);
}

int	Form::getExecGrade()const
{
	return (this->execGrade);
}

void	Form::beSigned(Bureaucrat& obj)
{
	if (obj.getGrade() <= this->signGrade)
		this->sign = 1;
	else
	 	throw GradeTooLowException();
}

void	Form::signForm()
{
	if (this->sign)
		std::cout<<"The form got signed!!"<<std::endl;
	else
	 	std::cout<<"The form is not signed, grade was low!!"<<std::endl;
}

const char*	Form::GradeTooHighException::what()const throw()
{
	return ("Grade too hight!!");
}

const char*	Form::GradeTooLowException::what()const throw()
{
	return ("Grade too low!!");
}

std::ostream&	operator<<(std::ostream& os, const Form& object)
{
	os << "Name : " << object.getName() << " Sign : " << object.getSign() << " Execute sign : " << object.getExecGrade() << " Sign grade : " << object.getSignGrade() << std::endl;
	return (os);
}
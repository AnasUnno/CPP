#pragma once

#include <iostream>
#include <string>

class Animal
{
	protected:

	std::string	type;

	public:

	Animal();
	Animal(const Animal& Original);
	void	operator=(const Animal& Original);
	~Animal();
	virtual void makeSound() const;
	std::string	getType()const;
};
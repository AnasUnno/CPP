#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:

	std::string	type;

	public:

	WrongAnimal();
	WrongAnimal(const WrongAnimal& Original);
	void	operator=(const WrongAnimal& Original);
	~WrongAnimal();
	virtual void makeSound() const;
	std::string	getType()const;
};
#pragma once

#include "Animal.hpp"

class	Dog:public Animal
{

	public:

	Dog();
	Dog(const Dog& Original);
	~Dog();
	std::string	getType()const;
	void		operator=(const Dog& Original);
	void		makeSound()const;
};
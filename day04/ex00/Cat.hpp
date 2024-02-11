#pragma once

#include "Animal.hpp"

class	Cat:public Animal
{
	public:

	Cat();
	Cat(const Cat& Original);
	~Cat();
	void		operator=(const Cat& Original);
	std::string	getType()const;
	void		makeSound()const;	
};

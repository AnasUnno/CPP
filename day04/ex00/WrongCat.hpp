#pragma once

#include "WrongAnimal.hpp"

class   WrongCat:public WrongAnimal
{

	public:

    WrongCat();
    WrongCat(const  WrongCat& Original);
	~WrongCat();
	std::string	getType()const;
	void		operator=(const WrongCat& Original);
	void		makeSound()const;
};
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout<<"WrongAnimal default constructor called"<<std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout<<"WrongAnimal destructor called"<<std::endl;
}

std::string WrongAnimal::getType()const
{
    return (this->type);
}

void    WrongAnimal::operator=(const WrongAnimal& Original)
{
    std::cout<<"WrongAnimal copy assignment operator called"<<std::endl;
    this->type = Original.getType();
}

WrongAnimal::WrongAnimal(const WrongAnimal& Original)
{
    std::cout<<"WrongAnimal copy constructor called"<<std::endl;
    operator=(Original);
}

void WrongAnimal::makeSound() const
{
    std::cout<<"WrongAnimal sound!!"<<std::endl;
}

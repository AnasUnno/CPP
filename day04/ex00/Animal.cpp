#include "Animal.hpp"

Animal::Animal()
{
    std::cout<<"Animal default constructor called"<<std::endl;
}

Animal::~Animal()
{
    std::cout<<"Animal destructor called"<<std::endl;
}

std::string Animal::getType()const
{
    return (this->type);
}

void    Animal::operator=(const Animal& Original)
{
    std::cout<<"Animal copy assignment operator called"<<std::endl;
    this->type = Original.getType();
}

Animal::Animal(const Animal& Original)
{
    std::cout<<"Animal copy constructor called"<<std::endl;
    operator=(Original);
}

void Animal::makeSound() const
{
    std::cout<<"Animal sound!!"<<std::endl;
}

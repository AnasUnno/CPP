#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout<<"Dog default constructor called"<<std::endl;
}

Dog::~Dog()
{
    std::cout<<"Dog destructor called"<<std::endl;
}

void    Dog::operator=(const Dog& Original)
{
    std::cout<<"Dog Copy assignment oprator called"<<std::endl;
    this->type = Original.getType();
}

Dog::Dog(const Dog& Original)
{
    std::cout<<"Dog copy constructor called"<<std::endl;
    operator=(Original);
}

std::string Dog::getType()const
{
    return (this->type);
}

void    Dog::makeSound()const
{
    std::cout<<this->type<<" Hawhaw!!"<<std::endl;
}

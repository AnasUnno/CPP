#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout<<"Cat default constructor called"<<std::endl;
}

Cat::~Cat()
{
    std::cout<<"Cat destructor called"<<std::endl;
}


void    Cat::operator=(const Cat& Original)
{
    std::cout<<"Cat copy assignment operator called"<<std::endl;
    this->type = Original.getType();
}

Cat::Cat(const Cat& Original)
{
    std::cout<<"Cat copy constructor called"<<std::endl;
    operator=(Original);
}

std::string Cat::getType()const
{
    return (this->type);
}

void    Cat::makeSound()const
{
    std::cout<<this->type<<" Meeoooooow!!"<<std::endl;
}

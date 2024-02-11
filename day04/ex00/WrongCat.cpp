#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout<<"WrongCat default constructor called"<<std::endl;
}

WrongCat::~WrongCat()
{
    std::cout<<"WrongCat destructor called"<<std::endl;
}

void    WrongCat::operator=(const WrongCat& Original)
{
    std::cout<<"WrongCat Copy assignment oprator called"<<std::endl;
    this->type = Original.getType();
}

WrongCat::WrongCat(const WrongCat& Original)
{
    std::cout<<"WrongCat copy constructor called"<<std::endl;
    operator=(Original);
}

std::string WrongCat::getType()const
{
    return (this->type);
}

void    WrongCat::makeSound()const
{
    std::cout<<this->type<<" Vri!!"<<std::endl;
}

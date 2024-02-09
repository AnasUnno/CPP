#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout<<"FragTrap "<<this->Name<<" default constructor is called"<<std::endl;
    this->HitPoints = 100;
    this->EnergiePoints = 100;
    this->AttackDamage = 30;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    std::cout<<"FragTrap "<<this->Name<<" parametrized constructor is called"<<std::endl;
    this->HitPoints = 100;
    this->EnergiePoints = 100;
    this->AttackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout<<"FragTrap "<<this->Name<<" destructor is called"<<std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout<<"FragTrap "<<this->Name<<" requests a high five"<<std::endl;
}

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout<<"ScavTrap "<<this->Name<<" default constructor is called"<<std::endl;
    this->HitPoints = 100;
    this->EnergiePoints = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    std::cout<<"ScavTrap "<<this->Name<<" parametrized constructor is called"<<std::endl;
    this->HitPoints = 100;
    this->EnergiePoints = 50;
    this->AttackDamage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout<<"ScavTrap "<<this->Name<<" destructor is called"<<std::endl;
}

void ScavTrap::guardGate()
{
    std::cout<<"ScavTrap "<<this->Name<<" is now in Gatekeeper mode"<<std::endl;
}

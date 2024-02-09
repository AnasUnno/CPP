#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
    std::cout<<"ScavTrap default constructor is called"<<std::endl;
    this->HitPoints = 100;
    this->EnergiePoints = 50;
    this->AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    std::cout<<"ScavTrap parametrized constructor is called"<<std::endl;
    this->Hitpoints = 100;
    this->EnergiePoints = 50;
    this->AttackDamage = 20;
}

void ScavTrap::guardGate()
{
    std::cout<<"ScavTrap "<<this->Name<<" is now in Gatekeeper mode"<<std::endl;
}

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout<<"ClapTrap default constructor called"<<std::endl;
	this->HitPoints = 10;
	this->EnergiePoints = 10;
	this->AttackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout<<"ClapTrap destructor called"<<std::endl;
}

ClapTrap::ClapTrap(std::string& name)
{
	std::cout<<"ClapTrap parametrized constructor called"<<std::endl;
	this->Name = name;
	this->HitPoints = 10;
	this->EnergiePoints = 10;
	this->AttackDamage = 0;
}

std::string ClapTrap::GetName()const
{
	return (this->Name);
}

unsigned int ClapTrap::GetHits()const
{
	return (this->HitPoints);
}

unsigned int ClapTrap::GetEnergie()const
{
	return (this->EnergiePoints);
}

unsigned int  ClapTrap::GetAttack()const
{
	return (this->AttackDamage);
}

void    ClapTrap::operator=(const ClapTrap& Original)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	this->Name = Original.GetName();
	this->HitPoints = Original.GetHits();
	this->EnergiePoints = Original.GetEnergie();
	this->AttackDamage = Original.GetAttack();
}

ClapTrap::ClapTrap(const ClapTrap& Original)
{
	std::cout<<"Copy constructor called"<<std::endl;
	operator=(Original);
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->HitPoints || !this->EnergiePoints)
	{
		std::cout<<"ClapTrap "<<this->Name<<" is disabled"<<std::endl;
		return ;
	}
	std::cout<<"ClapTrap "<<this->Name<<" attacks "<<target<<" causing "<<this->AttackDamage<<" points of damage!"<<std::endl;
	this->EnergiePoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->HitPoints || !this->EnergiePoints)
	{
		std::cout<<"ClapTrap "<<this->Name<<" is disabled"<<std::endl;
		return ;
	}
	if (this->HitPoints < amount)
		HitPoints = 0;
	else
		this->HitPoints -= amount;
	this->EnergiePoints--;
	std::cout<<"ClapTrap "<<this->Name<<" took "<<amount<<"  points of damage!"<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->HitPoints || !this->EnergiePoints)
	{
		std::cout<<"ClapTrap "<<this->Name<<" is disabled"<<std::endl;
		return ;
	}
	if (amount > 10)
		HitPoints = 10;
	else
		this->HitPoints += amount;
	this->EnergiePoints--;
	std::cout<<"ClapTrap "<<this->Name<<" repaired itself "<<amount<<" hit points"<<std::endl;
}


#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
	protected:

	std::string	Name;
	unsigned int HitPoints;
	unsigned int EnergiePoints;
	unsigned int AttackDamage;

	public:

	ClapTrap();
	ClapTrap(std::string& name);
	ClapTrap(const ClapTrap& Original);
	void	operator=(const ClapTrap& Original);
	~ClapTrap();
	std::string		GetName()const;
	unsigned int	GetHits()const;
	unsigned int	GetEnergie()const;
	unsigned int	GetAttack()const;
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
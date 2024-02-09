#include "ClapTrap.hpp"
#pragma once

class ScavTrap:public ClapTrap
{
	public:

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& Original);
	void	operator=(const ScavTrap& Original);
	~ScavTrap();
	void guardGate();
};

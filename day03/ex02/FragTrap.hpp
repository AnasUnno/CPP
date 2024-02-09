#pragma once

#include "ClapTrap.hpp"

class   FragTrap:public ClapTrap
{
    public:

    FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& Original);
	void	operator=(const FragTrap& Original);
	~FragTrap();
    void highFivesGuys(void);
};
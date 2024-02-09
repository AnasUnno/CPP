#include "ScavTrap.hpp"

int main()
{
    ScavTrap scavTrap("BOB");


    scavTrap.attack("evil robot");
	scavTrap.takeDamage(30);
	scavTrap.beRepaired(15);
    scavTrap.guardGate();

    return 0;
}
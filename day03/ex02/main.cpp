#include "FragTrap.hpp"

int main()
{
    FragTrap fragTrap("Charlie");

    fragTrap.attack("evil robot");
	fragTrap.takeDamage(20);
	fragTrap.beRepaired(10);
    fragTrap.highFivesGuys();

    return 0;
}
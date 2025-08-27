#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
//Create better tests for this
int main(void)
{
	ClapTrap ClapTrap1("Traps");
	ScavTrap ClapTrap2("Trips");
	ClapTrap1.attack("Trips");
	ClapTrap2.takeDamage(1);
	ClapTrap1.attack("Trips");
	ClapTrap2.takeDamage(1);
	ClapTrap1.attack("Trips");
	ClapTrap2.takeDamage(1);
	ClapTrap1.attack("Trips");
	ClapTrap2.takeDamage(1);
	ClapTrap1.attack("Trips");
	ClapTrap2.takeDamage(1);
	ClapTrap1.attack("Trips");
	ClapTrap2.takeDamage(1);
	ClapTrap1.attack("Trips");
	ClapTrap2.takeDamage(1);
	ClapTrap1.attack("Trips");
	ClapTrap2.takeDamage(1);
	ClapTrap1.attack("Trips");
	ClapTrap2.takeDamage(1);
	ClapTrap1.attack("Trips");
	ClapTrap2.takeDamage(1);
	ClapTrap1.beRepaired(5);
	ClapTrap2.beRepaired(5);
	ClapTrap2.attack("Traps");
	ClapTrap2.guardGate();
	ClapTrap2.attack("Traps");
	ClapTrap2.guardGate();
}

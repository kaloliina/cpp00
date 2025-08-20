#include "ClapTrap.hpp"
//do i need tto refer to the actual name by creating a function getname or can i just call it like this
int main(void)
{
	ClapTrap ClapTrap1("Traps");
	ClapTrap ClapTrap2("Trips");
	ClapTrap1.attack("Trips");
	ClapTrap2.takeDamage(0);
}

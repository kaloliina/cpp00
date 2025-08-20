#include "ClapTrap.hpp"
ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "A wild claptrap has been summoned!" << std::endl;
}
//its weird that attackdamage is 0 but still takedamage sennds how much its supposed to take damage...
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap disappeared into the depths of abyss." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints <= 0 || hitPoints <= 0)
		return ;
	energyPoints = energyPoints - 1;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints = hitPoints - amount;
	std::cout << "ClapTrap " << name << " is barely wounded..." << std::endl;
}
//do we  need feedback if person is dead or doesnt have hit points left...
void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints <= 0 || hitPoints <= 0)
		return ;	
	energyPoints = energyPoints - 1;
	hitPoints = hitPoints + amount;
	std::cout << "ClapTrap " << name << " returns to its den and licks its wounds." << std::endl;
}

//when it attacks, it causes the target to lose attackdamage amount of hit points.
//When repairing, it gets amount hit points back
//Attacking and repairing costs 1 energy point each
//Cannot do anything if no hit points r energy points left.
//create proper test case for this
//• From Module 02 to Module 09, your classes must be designed in the Orthodox
//Canonical Form, except when explicitely stated otherwise.

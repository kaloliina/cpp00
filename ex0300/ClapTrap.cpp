#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default Constructor called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : hitPoints(10), energyPoints(10), attackDamage(0)
{
	this->name = name;
	//Name could also be added to the initializer list?
	std::cout << "A wild ClapTrap has been summoned!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "Copy Constructor called!" << std::endl;
	this->name = copy.name;
	this->hitPoints = copy.hitPoints;
	this->energyPoints = copy.energyPoints;
	this->attackDamage = copy.attackDamage;
}

/*It checks if the current object (this) and the source object (other) are not the same object in memory.
To avoid deletions or errors...*/
ClapTrap& ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Copy Assignment called!" << std::endl;
	if (this != &src)
	{
		this->name = src.name;
		this->hitPoints = src.hitPoints;
		this->energyPoints = src.energyPoints;
		this->attackDamage = src.attackDamage;		
	}
	return *this;
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
//Is there a better way to print the messages, it feels weird that the strings need to be divided with <<
//when it attacks, it causes the target to lose attackdamage amount of hit points.
//When repairing, it gets amount hit points back
//Attacking and repairing costs 1 energy point each
//Cannot do anything if no hit points r energy points left.
//create proper test case for this
//• From Module 02 to Module 09, your classes must be designed in the Orthodox
//Canonical Form, except when explicitely stated otherwise.

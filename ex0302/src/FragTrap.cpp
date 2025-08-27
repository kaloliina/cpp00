#include "../include/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "Default FragTrap Constructor called!" << std::endl;
}

/*So this uses the constructor but then overwrites the information with scavtraps info?*/
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "A wild FragTrap has been summoned!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
	std::cout << "FragTrap Copy Constructor called!" << std::endl;
}

/*It checks if the current object (this) and the source object (other) are not the same object in memory.
To avoid deletions or errors...
//So here we dont refer to the ClapTrap because we are dealing with already existing object..?
Might be good to practise the copy and copy assignment
And I guess we don't have to put isGuarding here to false because this object already exists
and should have it set already!*/
FragTrap& FragTrap::operator=(const FragTrap &src)
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

FragTrap::~FragTrap()
{
	std::cout << "FragTrap disappeared into the depths of abyss." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " shares some high fives in the midst of a battle!" << std::endl;
}

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default Constructor called!" << std::endl;
}

/*So this uses the constructor but then overwrites the information with scavtraps info?*/
ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
	this->name = name;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << "A wild ScavTrap has been summoned!" << std::endl;
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

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap disappeared into the depths of abyss." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " cannot attack because they ran out of energy!" << std::endl;
		return ;
	}
	if (hitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " cannot attack because they are dead!" << std::endl;
		return ;
	}
	energyPoints = energyPoints - 1;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " is already dead and beaten to the ground!" << std::endl;
	}
	hitPoints = hitPoints - amount;
	std::cout << "ClapTrap " << name << " took " << amount << " points of damage." << std::endl;
}

/*
- Hit point refers to health
- Energy points is energy*/
void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " cannot repair itself because they don't have any energy left!" << std::endl;
		return ;
	}
	if (hitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " cannot repair itself when dead!" << std::endl;
		return ;
	}
	energyPoints = energyPoints - 1;
	hitPoints = hitPoints + amount;
	std::cout << "ClapTrap " << name << " returns to its den and licks its wounds." << std::endl;
}
/*Is there a better way to print the messages, it feels weird that the strings need to be divided with
<< ...*/

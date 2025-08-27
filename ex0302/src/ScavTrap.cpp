#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->isGuarding = false;
	std::cout << "Default ScavTrap Constructor called!" << std::endl;
}

/*So this uses the constructor but then overwrites the information with scavtraps info?*/
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	this->isGuarding = false;
	std::cout << "A wild ScavTrap has been summoned!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
	this->isGuarding = false;
	std::cout << "ScavTrap Copy Constructor called!" << std::endl;
}

/*It checks if the current object (this) and the source object (other) are not the same object in memory.
To avoid deletions or errors...
//So here we dont refer to the ClapTrap because we are dealing with already existing object..?
Might be good to practise the copy and copy assignment
And I guess we don't have to put isGuarding here to false because this object already exists
and should have it set already!*/
ScavTrap& ScavTrap::operator=(const ScavTrap &src)
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

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap disappeared into the depths of abyss." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (isGuarding == true)
	{
		std::cout << "ScavTrap " << name << " cannot attack when its sole focus is on guarding the gate!" << std::endl;
		return ;
	}
	if (energyPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " cannot attack because they ran out of energy!" << std::endl;
		return ;
	}
	if (hitPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " cannot attack because they are dead!" << std::endl;
		return ;
	}
	energyPoints = energyPoints - 1;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	if (hitPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " cannot possibly guard the gate when already dead!" << std::endl;
		return ;
	}
	if (isGuarding == true)
	{
		std::cout << "ScavTrap " << name << " continues to guard the gate in honor!" << std::endl;
		return ;
	}
	if (energyPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " does not have any energy left in order to guard the gate!" << std::endl;
		return ;
	}
	energyPoints = energyPoints - 1;
	isGuarding = true;
	std::cout << "ScavTrap " << name << " begins to guard the gate!" << std::endl;
}
/*Is there a better way to print the messages, it feels weird that the strings need to be divided with
<< ...*/

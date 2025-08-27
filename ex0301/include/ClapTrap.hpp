#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>
#include <iomanip>
/* Copy Constructor is called when you are creating a new object from an existing one.
Copy assignment is called when you are assigning to an already existing object from another existing object. 
So basically you are overriding existing object's current information with another object's info.
This is changed to protected because we can't access these members if they are private. But protected means we can inherit these*/
class ClapTrap {
protected:
std::string name;
int hitPoints;
int energyPoints;
int attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& copy);
	ClapTrap &operator=(const ClapTrap &src); 
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
#endif

//when it attacks, it causes the target to lose attackdamage amount of hit points.
//When repairing, it gets amount hit points back
//Attacking and repairing costs 1 energy point each
//Cannot do anything if no hit points r energy points left.
//Soo I guess the point of this exercise is to have only 1 class and then create
//for example 2 inherited objects (that have the class properties).
// class ScavTrap: public ClapTrap
// {
// 	public:
// 	void guardGate();
// };

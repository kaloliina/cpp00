#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>
#include <iomanip>
class ClapTrap {
private:
std::string name;
int hitPoints;
int energyPoints;
int attackDamage;
public:
	ClapTrap(std::string name);
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

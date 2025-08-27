#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <iomanip>
/*So now we create ScavTrap class which inherits charasteristics from ClapTrap (so in one way this is connected to the base Class)
And we don't need the data members because those are always copied by default but constructors we need?
And if the functions will behave differently depending on the class*/
class ScavTrap : public ClapTrap {
private:
	bool isGuarding;
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& copy);
	ScavTrap &operator=(const ScavTrap &src); 
	~ScavTrap();

	void attack(const std::string& target);
	void guardGate();
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

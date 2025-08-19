#include "HumanB.hpp"
HumanB::HumanB(std::string name)
{
 this->name = name;
 this->weapon = NULL;
}

HumanB::~HumanB()
{

}

void HumanB::attack() const
{
	if (weapon != NULL)
		std::cout << name << " attacks with their " << (*weapon).getType() << std::endl;
}

/*Okay not sure if i understood this correctly but since the main is set, the only way for me to send the weapon is by reference??
Since HumanA always has weapon in hand, i can directly point the weapons reference but since humanb does not always have the weapon in hand
i have to take its address to refer it to via pointer? And if i didnt send a reference, i would lose the original address?*/
void HumanB::setWeapon(Weapon &weapon)
{
 	std::cout << name << " takes the weapon" << std::endl;
	this->weapon = &weapon;
}
    // Zombie *newZombie;
    // newZombie = new Zombie(name);
    // return (newZombie);

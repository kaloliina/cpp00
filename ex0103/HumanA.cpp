#include "HumanA.hpp"
//constructor for 'HumanA' must explicitly initialize the reference member 'weapon'
//got this error because apparently the reference needs bo be bount on an existing object
HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name)
{
 std::cout << name << " takes the weapon" << std::endl;
}

HumanA::~HumanA()
{

}

void HumanA::attack() const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

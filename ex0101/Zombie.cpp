#include "Zombie.hpp"

Zombie::Zombie()
{ 
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << name << " says hello and rises from the ashes." << std::endl;    
}
Zombie::~Zombie()
{
    std::cout << name << " could not find brains and ended itself." << std::endl;
}
void Zombie::announce (void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

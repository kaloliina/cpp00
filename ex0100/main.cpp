#include "Zombie.hpp"

int main(void)
{
    Zombie *Zombie = newZombie("Karoliina");
    Zombie->announce();
    randomChump("Karoliina2");
    delete Zombie;
    return (0);
}
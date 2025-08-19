#include "Zombie.hpp"

//You have to determine in what case
//it’s better to allocate the zombies on the stack or heap.
//Look into this as I am not sure of the reason
//Is another reason that when I declare a new, then I am able
//to refer to it outside member functions?
int main(void)
{
    Zombie *Zombie = newZombie("Karoliina");
    Zombie->announce();
    randomChump("Karoliina2");
    delete Zombie;
    return (0);
}

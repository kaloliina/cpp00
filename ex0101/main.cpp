#include "Zombie.hpp"

//Why do we here use the dot rather than arrow for announcing?
//Also in zombiehorde, we first construct the zombies in the "default way"
//and then proceed to construct them again with parameterised constructor..?
int main(void)
{
	int i = 0;
	int nbr_zombies = 6;
	Zombie *Zombie = zombieHorde(nbr_zombies, "Karoliina");
	while (i < nbr_zombies)
	{
		Zombie[i].announce();
		i++;
	}
	delete[] Zombie;
	return (0);
}

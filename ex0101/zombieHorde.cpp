#include "Zombie.hpp"

//If I construct something with the default constructor, does it destruct the object??
//Right now I have debug text that says they are constructed, then they are destructed, then they announce themselves..?
Zombie* zombieHorde(int n, std::string name)
{
	int i = 0;
	Zombie *zombieHorde;
	zombieHorde = new Zombie[n];
	while (i < n)
	{
		zombieHorde[i] = Zombie(name);
		i++;
	}
	return (zombieHorde);
}

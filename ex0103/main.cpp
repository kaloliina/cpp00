//The assignment asked in which case do you think it would be the best
//to use a pointer to weapon and in which case reference
//So far not sure but I have understood that references
//are used for existing variables. The other person always has a weapon equipped
//so I  would assume then its easy to reference because we know they will have it.
//Also references cannot be pointed to refer another object (which is not our problem for now)
//But bigger thing is that references cannot be NULL to indicate that they are not pointing to any valid thing
//So if the other person doesnt have weapon equipped all the time, we shouldnt reference to it because
//it may be that they are not equipping the weapon at that time.
//Ignore everything i said, we are not changing to to other objects but we need to have references and pointers purely because
//reference is cannot be NULL so we really dont know if the other one is equipping or not but we know A is always equipping
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
{
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}
{
Weapon club = Weapon("crude spiked club");
HumanB jim("Jim");
jim.setWeapon(club);
jim.attack();
club.setType("some other type of club");
jim.attack();
}
return 0;
}

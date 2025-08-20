#include "Harl.hpp"

Harl::Harl()
{ 
}

Harl::~Harl()
{
}
void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;	
}
//so we are declaring a pointer and referencing to the member functions?
void Harl::complain( std::string level )
{
	void (Harl::*ptr[])(void)
	= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string messages[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4)
	{
		if (level == messages[i])
			(this->*ptr[i])();
		i++;
	}
}
//previously i had Harl there instead of this, why ddnt that work?
//Although the if  else questions mention confuses me becaue could one basically
//use switch statements (which were mentioned in the exercise)

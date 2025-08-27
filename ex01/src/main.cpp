#include "../include/PhoneBook.hpp"

/*Only question is if I should have the show function creating additional strings
Also review the showContact once more*/
int main(void)
{
	PhoneBook PhoneBook;
	std::string command;
	while (1)
	{
	std::cout << INPUTOPTIONS << std::endl;
	std::getline(std::cin, command);
	if (command.compare("ADD") == 0)
		PhoneBook.addContact();
	if (command.compare("SEARCH") == 0)
		PhoneBook.searchContact();
	if (command.compare("EXIT") == 0)
		break;
	}
	return (0);
}

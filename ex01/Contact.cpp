
#include "PhoneBook.hpp"

Contact::Contact()
{

}
Contact::~Contact()
{

}


void Contact::show() const {
	std::cout << index << "|" << firstName << "|" << lastName << "|" << nickName << std::endl;
}

Contact::Contact(int index, std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	this->index = index;
	this->timestamp = time(&this->timestamp);
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

time_t Contact::get_time()
{
	return timestamp;
}

int main(void)
{
	Phonebook phoneBook;
	std::string command;
	while (1)
	{
	std::cout << INPUTOPTIONS;
	getline(std::cin, command);
	if (command.compare("ADD") == 0)
		phoneBook.addContact();
	if (command.compare("SEARCH") == 0)
		phoneBook.showContact();
	if (command.compare("EXIT") == 0)
		break;
	}
	return (0);
}

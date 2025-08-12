
#include "PhoneBook.hpp"

Contact::Contact()
{

}
Contact::~Contact()
{

}

//if setw is first, then the text will be right aligned. If its under the text, it will be left aligned
//This should be const but it cannot be const at the moment xD
//This one should have a version where you just give one piece of info per line for the contact you gave.
//Also I cannot resize or append the original things because I still need them xd
void Contact::show() {
	if (firstName.size() > 10)
	{
		firstName.resize(9);
		firstName.append(".");
	}
	if (lastName.size() > 10)
	{
		lastName.resize(9);
		lastName.append(".");
	}
	if (nickName.size() > 10)
	{
		nickName.resize(9);
		nickName.append(".");
	}
	std::cout << std::setw(10) << index << "|" << std::setw(10) << firstName << "|" << std::setw(10) << lastName << "|" << std::setw(10) << nickName << std::endl;
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


#include "PhoneBook.hpp"
//When contact gets instantiated, we are basically creating an object (an instance of that class)
//It allocates memory for that object and calls the constructor.
//So class is like the blueprint or the recipe and object (instance) is the actual thing built from that blueprint
Contact::Contact()
{
}

//When the program ends, we automatically call destructor which then frees the allocated space.
Contact::~Contact()
{
}

//if setw is first, then the text will be right aligned. If its under the text, it will be left aligned
//This should be const but it cannot be const at the moment xD
//This one should have a version where you just give one piece of info per line for the contact you gave.
//Also I cannot resize or append the original things because I still need them xd
void Contact::show(int mode) const {
//	if (firstName.size() > 10)
//	{
//		firstName.resize(9);
//		firstName.append(".");
//	}
//	if (lastName.size() > 10)
//	{
//		lastName.resize(9);
//		lastName.append(".");
//	}
//	if (nickName.size() > 10)
//	{
//		nickName.resize(9);
//		nickName.append(".");
//	}
	if (mode == 1)
		std::cout << std::setw(10) << index << "|" << std::setw(10) << firstName << "|" << std::setw(10) << lastName << "|" << std::setw(10) << nickName << std::endl;
	else
		std::cout << firstName << std::endl << lastName << std::endl << nickName << std::endl << phoneNumber << std::endl << darkestSecret << std::endl;
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

time_t Contact::get_time() const
{
	return timestamp;
}


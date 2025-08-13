
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
//I wonder if its okay that im not using the contact to fetch these but im actually modifying it here...
//this one has extremely weird naming convention
void Contact::show(int mode) const {
	std::string namey, lastie, nicksie;
	namey = firstName.substr(0, firstName.size());
	lastie = lastName.substr(0, lastName.size());
	nicksie = nickName.substr(0, nickName.size());
	if (firstName.size() > 10)
	{
		namey.resize(9);
		namey.append(".");
	}
	if (lastName.size() > 10)
	{
		lastie.resize(9);
		lastie.append(".");
	}
	if (nickName.size() > 10)
	{
		nicksie.resize(9);
		nicksie.append(".");
	}
	if (mode == 1)
		std::cout << std::setw(10) << index << "|" << std::setw(10) << namey << "|" << std::setw(10) << lastie << "|" << std::setw(10) << nicksie << std::endl;
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


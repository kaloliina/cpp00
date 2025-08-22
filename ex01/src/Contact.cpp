#include "../include/PhoneBook.hpp"

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

/* If setw is first, then text will be right-aligned.
I wonder if it's okay that I'm not using the contact to fetch  this info but actually creating duplicates*/
void Contact::show(int mode) const {
	std::string name, last, nick;

	if (mode == 1)
	{
		name = firstName.substr(0, firstName.size());
		last = lastName.substr(0, lastName.size());
		nick = nickName.substr(0, nickName.size());
		if (firstName.size() > 10)
		{
			name.resize(9);
			name.append(".");
		}
		if (lastName.size() > 10)
		{
			last.resize(9);
			last.append(".");
		}
		if (nickName.size() > 10)
		{
			nick.resize(9);
			nick.append(".");
		}
		std::cout << "|" << std::setw(10) << index << "|" << std::setw(10) << name << "|" << std::setw(10) << last << "|" << std::setw(10) << nick << "|" << std::endl;
	}
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


#include "PhoneBook.hpp"
//check if brief mentions class called PhoneBook or Phonebook
// Phonebook() : index(0) {}
Phonebook::Phonebook()
{
 index = 0;
}

Phonebook::~Phonebook()
{

}
//This one should prompt the message that contact information cannot be left empty and reprompt the person to write the message again.
//Should I add a "" to every string and have a while loop that checks as long as the input is empty, prompt the messages again and again...?
//And maybe have it in a separate function gets called for every specific one? or somehow rotates over every one of them.
void Phonebook::addContact()
{
std::string f, l, n, p, d;

std::string input;

	std::cout << index << std::endl;
	std::cout << FIRSTNAME << std::endl;
	getline(std::cin, f);
	if (f.size() == 0)
		std::cout << "Sorry but it cant be left empty" << std::endl;
	std::cout << LASTNAME << std::endl;
	getline(std::cin, l);
	std::cout << NICKNAME << std::endl;
	getline(std::cin, n);
	std::cout << PHONENUMBER << std::endl;
	getline(std::cin, p);
	std::cout << DARKESTSECRET << std::endl;
	getline(std::cin, d);
	if (index < 3)
	{
	arr[index] = Contact(index + 1, f, l, n, p, d);
	index++;
	std::cout << index << std::endl;
	}
	else
	{
		std::cout << MAX_CONTACTS << std::endl;
		int oldest;
		index = 0;
		time_t timestamp;
		time(&timestamp);
		while (index < 3)
		{
			if (arr[index].get_time() < timestamp)
			{
				timestamp = arr[index].get_time();
				oldest = index;
			}
			index++;
		}
		arr[oldest] = Contact(oldest + 1, f, l, n, p, d);
		std::cout << oldest << std::endl;
	}
}

void Phonebook::showContact()
{
	int		search;
	int i = 0;
	std::string input;
	while (i < index)
	{
		arr[i].show();
		i++;
	}
	std::cout << TYPEINDEX;
	getline(std::cin, input);
	if (input.size() != 1 || input[0] < '1' || input[0] > '8')
	{
		std::cout << SEARCH_INDEX;
		return ;
	}
	search = input[0] - '0' - 1;
	if (search >= index)
	{
		std::cout << SEARCH_INDEX;
		return ;
	}
	arr[search].show();
}

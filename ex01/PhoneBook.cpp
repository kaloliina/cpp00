#include "PhoneBook.hpp"

void Phonebook::addContact()
{
std::string f, l, n, p, d;

std::string input;

	std::cout << index << std::endl;
	std::cout << FIRSTNAME << std::endl;
	getline(std::cin, f);
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

//missing error handling
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
	search = input[0] - '0' - 1;
	arr[search].show();
}

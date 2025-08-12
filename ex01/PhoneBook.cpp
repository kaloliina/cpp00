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

std::string update_properties(std::string lala, std::string important)
{
	while (true)
	{
		std::cout << lala << std::endl;
		getline(std::cin, important);
		if (important.size() != 0)
			break;
		else
			std::cout << EMPTY_INPUT << std::endl;
	}
	return (important);
}

void Phonebook::addContact()
{
	std::string f, l, n, p, d;

	std::cout << index << std::endl;
	f = update_properties(FIRSTNAME, f);
	l = update_properties(LASTNAME, l);
	n = update_properties(NICKNAME, n);
	p = update_properties(PHONENUMBER, p);
	d = update_properties(DARKESTSECRET, d);
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

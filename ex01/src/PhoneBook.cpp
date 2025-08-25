#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
}

PhoneBook::~PhoneBook()
{
}

std::string PhoneBook::update_properties(const std::string& message) const
{
	std::string answer;
	while (true)
	{
		std::cout << message << std::endl;
		getline(std::cin, answer);
		if (answer.size() != 0)
			break;
		else
			std::cout << EMPTY_INPUT << std::endl;
	}
	return (answer);
}

void PhoneBook::addContact()
{
	std::string f, l, n, p, d;
	int new_index, oldest;
	time_t timestamp;

	f = update_properties(FIRSTNAME);
	l = update_properties(LASTNAME);
	n = update_properties(NICKNAME);
	p = update_properties(PHONENUMBER);
	d = update_properties(DARKESTSECRET);
	if (index < MAX_CONTACTS_AMOUNT)
	{
		arr[index] = Contact(index + 1, f, l, n, p, d);
		index++;
	}
	else
	{
		std::cout << MAX_CONTACTS << std::endl;
		new_index = 0;
		time(&timestamp);
		while (new_index < MAX_CONTACTS_AMOUNT)
		{
			if (arr[new_index].get_time() < timestamp)
			{
				timestamp = arr[new_index].get_time();
				oldest = new_index;
			}
			new_index++;
		}
		arr[oldest] = Contact(oldest + 1, f, l, n, p, d);
		std::cout << oldest << std::endl;
	}
}

void PhoneBook::searchContact() const
{
	int	search;
	int	i = 0;
	std::string input;
	if (index == 0)
	{
		std::cout << NO_CONTACTS << std::endl;
		return ;
	}
	while (i < index)
	{
		arr[i].show(1);
		i++;
	}
	std::cout << TYPEINDEX << std::endl;
	getline(std::cin, input);
	if (input.size() != 1 || input[0] < '1' || input[0] > '8')
	{
		std::cout << SEARCH_INDEX << std::endl;
		return ;
	}
	search = input[0] - '0' - 1;
	if (search >= index)
	{
		std::cout << SEARCH_INDEX << std::endl;
		return ;
	}
	arr[search].show(2);
}

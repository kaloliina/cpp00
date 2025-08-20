#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	index = 0;
}

PhoneBook::~PhoneBook()
{
}
//Does the phone number need to be digits only?
//Does this need to be a member function???
std::string update_properties(std::string message, std::string answer)
{
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

	std::cout << index << std::endl;
	f = update_properties(FIRSTNAME, f);
	l = update_properties(LASTNAME, l);
	n = update_properties(NICKNAME, n);
	p = update_properties(PHONENUMBER, p);
	d = update_properties(DARKESTSECRET, d);
	if (index < MAX_CONTACTS_AMOUNT)
	{
		arr[index] = Contact(index + 1, f, l, n, p, d);
		index++;
		std::cout << index << std::endl;
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

//Should newlinie be in the macro or is it better to have it in the std::endl?
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
	arr[search].show(2);
}

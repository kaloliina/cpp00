
#include "Contact.hpp"

#define FIRSTNAME "Type first name: "
#define LASTNAME "Type last name: "
#define NICKNAME "Type nickname: "
#define PHONENUMBER "Type phone number: "
#define DARKESTSECRET "Type darkest secret: "
#define INPUTOPTIONS "Type either <ADD>, <SEARCH> or <EXIT>\n"
#define TYPEINDEX "Type the index of the contact you wish to see.\n"

//index needs to start at 1

void Contact::show() const {
	std::cout << p_index << "|" << firstName << "|" << lastName << "|" << nickName << std::endl;
}

time_t Contact::get_time()
{
	return timestamp;
}

class Phonebook {
public:
Contact arr[8];
std::string f, l, n, p, d;
int		index = 0;
int		search;
std::string input;
void addContact()
{
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
	time_t timestamp;
	time(&timestamp);
	arr[index] = Contact(index + 1, timestamp, f, l, n, p, d);
	index++;
	std::cout << index << std::endl;
	}
	else
	{
		std::cout << "All contacts added, we will overwrite oldest" << std::endl;
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
		arr[oldest] = Contact(oldest + 1, timestamp, f, l, n, p, d);
//		arr[oldest].update(oldest + 1, f, l, n, p, d);
		std::cout << oldest << std::endl;
	}
}
//missing error handling
void showContact()
{
	int i = 0;
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
};

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
//getline() function used for getting the

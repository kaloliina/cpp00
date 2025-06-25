#include <iostream>
using namespace std;
#define FIRSTNAME "Type first name: "
#define LASTNAME "Type last name: "
#define NICKNAME "Type nickname: "
#define PHONENUMBER "Type phone number: "
#define DARKESTSECRET "Type darkest secret: "
#define INPUTOPTIONS "Type either <ADD>, <SEARCH> or <EXIT>\n"
#define TYPEINDEX "Type the index of the contact you wish to see.\n"

//index needs to start at 1
class Contact {
public:
int		p_index;
time_t timestamp;
string firstName;
string lastName;
string nickName;
string phoneNumber;
string darkestSecret;
void show(){
	cout << p_index << "|" << firstName << "|" << lastName << "|" << nickName << endl;
}
void update(int index, string f, string l, string n, string p, string d)
{
	p_index = index;
	time(&timestamp);
	firstName = f;
	lastName = l;
	nickName = n;
	phoneNumber = p;
	darkestSecret = d;
}
};

//should the functions truly be inside the classes or can they be separated somehow :D
//it would be better to save the options in an array so one could easily loop through them
//whats the difference between public and private...
class Phonebook {
public:
Contact arr[8];
string f, l, n, p, d;
int		index = 0;
int		search;
string input;
void addContact()
{
	cout << index << endl;
	cout << FIRSTNAME << endl;
	getline(cin, f);
	cout << LASTNAME << endl;
	getline(cin, l);
	cout << NICKNAME << endl;
	getline(cin, n);
	cout << PHONENUMBER << endl;
	getline(cin, p);
	cout << DARKESTSECRET << endl;
	getline(cin, d);
	if (index < 3)
	{
	arr[index].update(index + 1, f, l, n, p, d);
	index++;
	cout << index << endl;
	}
	else
	{
		cout << "All contacts added, we will overwrite oldest" << endl;
		int oldest;
		index = 0;
		time_t timestamp;
		time(&timestamp);
		while (index < 3)
		{
			if (arr[index].timestamp < timestamp)
			{
				timestamp = arr[index].timestamp;
				oldest = index;
			}
			index++;
		}
		arr[oldest].update(oldest + 1, f, l, n, p, d);
		cout << oldest << endl;
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
	cout << TYPEINDEX;
	getline(cin, input);
	search = input[0] - '0' - 1;
	arr[search].show();
}
};

int main(void)
{
	Phonebook phoneBook;
	string command;
	while (1)
	{
	cout << INPUTOPTIONS;
	getline(cin, command);
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

#include <iostream>
#include "Contact.hpp"
#define FIRSTNAME "Type first name: "
#define LASTNAME "Type last name: "
#define NICKNAME "Type nickname: "
#define PHONENUMBER "Type phone number: "
#define DARKESTSECRET "Type darkest secret: "
#define INPUTOPTIONS "Type either <ADD>, <SEARCH> or <EXIT>\n"
#define TYPEINDEX "Type the index of the contact you wish to see.\n"
#define MAX_CONTACTS "Maximum amount of contacts reached, overwriting the oldest.\n"
#define SEARCH_INDEX "This phonebook only accepts the indexes shown next to the contact."

class Phonebook {
public:
Contact arr[8];
int index;
Phonebook() : index(0) {}
~Phonebook() {}

void addContact();
void showContact();
};

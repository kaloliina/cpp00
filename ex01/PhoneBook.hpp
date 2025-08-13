
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#define FIRSTNAME "Type first name: "
#define LASTNAME "Type last name: "
#define NICKNAME "Type nickname: "
#define PHONENUMBER "Type phone number: "
#define DARKESTSECRET "Type darkest secret: "
#define INPUTOPTIONS "Type either <ADD>, <SEARCH> or <EXIT>\n"
#define TYPEINDEX "Type the index of the contact you wish to see.\n"
#define MAX_CONTACTS "Maximum amount of contacts reached, overwriting the oldest.\n"
#define SEARCH_INDEX "This phonebook only accepts the indexes shown next to the contact.\n"
#define EMPTY_INPUT "I'm sorry but this crappy phonebook will not accept empty input.\n"
#define NO_CONTACTS "This phonebook has no contacts whatsoever.\n"
#define MAX_CONTACTS_AMOUNT 8

class PhoneBook {
private:
Contact arr[8];
int index;
public:
PhoneBook();
~PhoneBook();

void addContact();
void searchContact() const;
};
#endif

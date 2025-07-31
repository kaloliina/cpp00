
#include <iostream>
//Iterate over the naming conventions
class Contact {
private:
int		index;
time_t timestamp;
std::string firstName;
std::string lastName;
std::string nickName;
std::string phoneNumber;
std::string darkestSecret;
public:
	Contact() {}
	Contact(int index, std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
	~Contact() {}

	void show() const;
	time_t get_time();
};

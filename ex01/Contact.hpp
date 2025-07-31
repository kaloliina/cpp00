
#include <iostream>

class Contact {
private:
int		p_index;
time_t timestamp;
std::string firstName;
std::string lastName;
std::string nickName;
std::string phoneNumber;
std::string darkestSecret;
public:
	Contact() {}
	Contact(int p_index, time_t timestamp, std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret) {}
	~Contact() {}

	void show() const;
	time_t get_time();
};

// void show(){
// 	std::cout << p_index << "|" << firstName << "|" << lastName << "|" << nickName << std::endl;
// }
// void update(int index, string f, string l, string n, string p, string d)
// {
// 	p_index = index;
// 	time(&timestamp);
// 	firstName = f;
// 	lastName = l;
// 	nickName = n;
// 	phoneNumber = p;
// 	darkestSecret = d;
// }

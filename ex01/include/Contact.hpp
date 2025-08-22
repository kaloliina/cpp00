#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iomanip>

/*Class is user-defined data type which holds its own data members and member functions that can be used by creating an instance of that class
Class doesn't exist until one is instantiated. (similarish to structs)
Private and public (and protected) are access specifiers which specify the access level...
Meaning if there is a private specifier, these elements can only be controlled within the class
but if theres a public speficier it can be accessed from outside the class.
Underneath the data members we have the constructros and destructors.
These are special class members which are called by the compiler every time an object of that class
is instantiated. They are used to construct the objects and making them ready to use.
Then we have parameterized constructors which basically can instantiate a class by giving detailed info
to data members. 
Even if we are using the parameterized constructors mainly, we need a default constructor because when instiating
object Phonebook, we need to tell that there will be "default" objects constructed. And normally, all classes would have default
constructors, destructors etc but if we add a type of constructor in the class, it will not create any of those by default.
Then we have destructor which deallocates all the mem previously used by the object and it's called
when the scope ends.
Then of course we have the class functions and for these, the brief mentions declarations should only be in the header file
so no brackets here...
*/
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
	Contact();
	Contact(int index, std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
	~Contact();

	void show(int mode) const;
	time_t get_time() const;
};
#endif
//show should be const

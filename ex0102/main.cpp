#include <iostream>
#include <string>
#include <iomanip>
#include <memory>

//0x7ffd55ae2920
//0x7ffd55ae2900
//0x7ffd55ae2920
//HI THIS IS BRAIN
//0x7ffd55ae2920
//HI THIS IS BRAIN
//this is the result, stringptr confuses me abit?
int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << addressof(str) << std::endl;
	std::cout << addressof(stringPTR) << std::endl;
	std::cout << addressof(stringREF) << std::endl;
	std::cout << str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}

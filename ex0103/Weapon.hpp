#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>
#include <iomanip>
class Weapon {
private:
std::string type;
public:
	Weapon();
	Weapon(std::string);
	~Weapon();

	std::string getType() const;
	void setType(std::string);
};
#endif

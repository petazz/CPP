#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>

class Weapon {
	private:
		std::string type;
	public:
		Weapon(std:: string type);
		~Weapon();
		std::string getType(void);
		void setType(std::string type);
};

#endif
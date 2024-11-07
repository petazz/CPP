#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &weapon);
};

#endif
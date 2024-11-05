#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int hitpoints;
		int energyPoints;
		int attackDamage;
	public:
		ClapTrap(std::string name, int hitpoints, int energyPoints, int attackDamage);
		~ClapTrap();
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int getAttackDamage();
		std::string getName(ClapTrap const & instance);
};

#endif
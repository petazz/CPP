#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:
		std::string name;
	public:
		FragTrap(std::string name);
		~FragTrap();
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void highFivesGuys();
};



#endif
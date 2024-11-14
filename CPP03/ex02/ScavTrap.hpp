#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		std::string name;
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void guardGate();
		std::string getName();
};

#endif
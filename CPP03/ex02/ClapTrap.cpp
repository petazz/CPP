#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	this->hitpoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ClapTrap " << this->name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " going to lobby" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	this->hitpoints -= amount;
	if (this->hitpoints <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
	}
}

void ClapTrap::attack(std::string const &target)
{
	if (this->hitpoints == 0)
	{
		std::cout << "ClapTrap" << this->name << "is dead" << std::endl;
		return;
	}
	if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap" << this->name << "has not energy points" << std::endl;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}
int ClapTrap::getAttackDamage()
{
	return this->attackDamage;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitpoints == 0)
	{
		std::cout << "ClapTrap" << this->name << "is dead" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " is being repaired for " << amount << " points!" << std::endl;
	this->hitpoints += amount;
}
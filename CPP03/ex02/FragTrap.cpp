#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name << " says: High five!" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap " << this->name << " is repaired for " << amount << " points!" << std::endl;
}
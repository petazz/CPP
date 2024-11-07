#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	std::cout << "HumanB " << name << " created" << std::endl;
	this->name = name;
}

HumanB::~HumanB() {
	std::cout << "HumanB " << this->name << " destroyed" << std::endl;
}

void HumanB::attack() {
	if (!this->weapon)
		std::cout << this->name << " has no weapon" << std::endl;
	else
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}


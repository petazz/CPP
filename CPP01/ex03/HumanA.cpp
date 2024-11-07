#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(&weapon) {
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA() {
	std::cout << "HumanA " << this->name << " destroyed" << std::endl;
}

void HumanA::attack() {
		std::cout << this->name << " attacks with his " << weapon->getType() << std::endl;
}

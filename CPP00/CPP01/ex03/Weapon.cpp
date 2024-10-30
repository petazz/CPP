#include "Weapon.hpp"
#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>

Weapon :: Weapon(std::string type){
	this->type = type;
}

Weapon :: ~Weapon(){}

std::string Weapon :: getType(void){
	return this->type;
}

void Weapon :: setType(std::string type){
	this->type = type;
}
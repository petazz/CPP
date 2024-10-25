#include "Zombie.hpp"
#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>

Zombie :: Zombie(std::string name){
	this->name = name;
}

Zombie :: ~Zombie(){
	std::cout << name << " has been destroyed" << std::endl;	
}

void Zombie :: announce(){
	std::cout << "BraiiiiiiinnnzzzZ" << std::endl;
}
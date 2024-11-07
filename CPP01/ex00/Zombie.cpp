#include "Zombie.hpp"

Zombie :: Zombie(std::string name){
	this->name = name;
}

Zombie :: ~Zombie(){
	std::cout << name << " has been destroyed" << std::endl; // Use std::cout instead of cout
}

void Zombie :: announce(){
	std::cout << "BraiiiiiiinnnzzzZ" << std::endl; // Use std::cout instead of cout
}
#include "Zombie.hpp"

Zombie :: Zombie(){
	return;
}

Zombie :: ~Zombie(){
	std::cout << name << " has been destroyed" << std::endl;	
}

void Zombie :: announce(){
	std::cout << "BraiiiiiiinnnzzzZ" << std::endl;
}
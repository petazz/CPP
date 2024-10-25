#include "Zombie.hpp"
#include <string>
#include <cstdlib> // Incluir esta cabecera para usar exit
#include <iomanip>
#include <iostream> // Include the iostream header for cout

Zombie :: Zombie(std::string name){
	this->name = name;
}

Zombie :: ~Zombie(){
	std::cout << name << " has been destroyed" << std::endl; // Use std::cout instead of cout
}

void Zombie :: announce(){
	std::cout << "BraiiiiiiinnnzzzZ" << std::endl; // Use std::cout instead of cout
}
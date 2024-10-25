#include "Zombie.hpp"
#include <string>
#include <cstdlib> // Incluir esta cabecera para usar exit
#include <iomanip>
#include <iostream> 

void randomChump(std::string name) {
	Zombie zombie(name);
	zombie.announce();
} 
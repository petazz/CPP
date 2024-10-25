#include "Zombie.hpp"
#include <string>
#include <cstdlib> // Incluir esta cabecera para usar exit
#include <iomanip>
#include <iostream> 

Zombie* newZombie (std::string name) {
	Zombie *zombie = new Zombie(name);
	return (zombie);
}
#include "Zombie.hpp"
#include <string>
#include <cstdlib> // Incluir esta cabecera para usar exit
#include <iomanip>
#include <iostream>  

int main(void) {
	Zombie *zombie = newZombie("Zombie1");
	zombie->announce();
	randomChump("Zombie2");
	delete zombie;
	return (0);
}
#include "Zombie.hpp"
#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream> 

Zombie** zombieHorde(int N, std::string name) {
	Zombie** horde = new Zombie*[N];
	for (int i=0; i< N; i++) {
		horde[i] = new Zombie(name);
	}
	return horde;
}
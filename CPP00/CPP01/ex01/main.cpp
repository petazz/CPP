#include "Zombie.hpp"
#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>

int main() {
	int N = 5;
	Zombie **horde = zombieHorde(5, "peter");
	for (int i=0; i<N; i++) {
		horde[i]->announce();
	}

	for (int j = 0; j < N; j++) {
		delete horde[j];
	}
}
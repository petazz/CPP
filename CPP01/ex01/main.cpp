#include "Zombie.hpp"


int main() {
	int N = 5;
	Zombie *horde = zombieHorde(5, "peter");
	for (int i=0; i<N; i++) {
		horde[i].announce();
	}

	delete []horde;
}
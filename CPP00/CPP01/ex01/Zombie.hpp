#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <cstdlib> 
#include <iomanip>

class Zombie {
	private: 
		std::string name;
	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);
Zombie** zombieHorde(int N, std::string name);

#endif
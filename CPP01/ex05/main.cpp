#include "Harl.hpp"
#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>

int main(){

	std::string level;
	Harl Harl;
	std::cout << "Enter a level: " << std::endl;
	std::cin >> level;
	Harl.complein(level);
}
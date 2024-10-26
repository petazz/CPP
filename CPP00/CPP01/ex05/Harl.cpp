#include "Harl.hpp"
#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>

void Harl :: complein(std::string level) {
	typedef void (Harl::*ptr)(); //para definir y crear un ptr a una funcion de clase Harl
	ptr functions [] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error}; //array de ptr a funcones
	std::string levels [] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for(int i=0;i<4;i++) {
		if (levels[i] == level){
			(this->*functions[i])();
			return;
		}
	}

	std::cout << "Invalid level" << std::endl;
}

void Harl :: debug(void) {
	std::cout << "DEBUG" << std::endl;
}

void Harl :: info(void) {
	std::cout << "INFO" << std::endl;
}

void Harl :: warning(void) {
	std::cout << "WARNING" << std::endl;
}

void Harl :: error(void) {
	std::cout << "ERROR" << std::endl;
}
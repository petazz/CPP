#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	this->type = "WrongAnimal";
	std::cout << GREEN << "Wrong Animal Constructor called" << RESET << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
	std::cout << MAGENTA << "Wrong Animal Assignation operator called" << RESET << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

WrongAnimal::WrongAnimal (const WrongAnimal &other){
	std::cout << YELLOW << "Wrong Animal Copy Constructor called" << RESET << std::endl;
	*this = other;
}

WrongAnimal::~WrongAnimal(){
	std::cout << RED << "Wrong Animal Destructor called" << RESET << std::endl;
}

void WrongAnimal::makeSound() const{
	std::cout << BLUE << "Wrong Animal sound" << RESET << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}
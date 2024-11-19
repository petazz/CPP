#include "Animal.hpp"

Animal::Animal(){
	std::cout << GREEN << "Animal Constructor called" << RESET << std::endl;
	this->type = "Animal";
}

Animal &Animal::operator=(const Animal &other){
	std::cout << MAGENTA << "Animal Assignation operator called" << RESET << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

Animal::Animal (const Animal &other){
	std::cout << YELLOW << "Animal Copy Constructor called" << RESET << std::endl;
	*this = other;
}

Animal::~Animal(){
	std::cout << RED << "Animal Destructor called" << RESET << std::endl;
}

void Animal::makeSound() const{
	std::cout << BLUE << "Animal sound" << RESET << std::endl;
}

std::string Animal::getType() const {
	return this->type;
}
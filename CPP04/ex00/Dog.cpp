#include "Dog.hpp"

Dog::Dog() {
	std::cout << GREEN << "Dog: Default constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	this->type = other.type;
	std::cout << YELLOW << "Dog: Copy constructor called" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << MAGENTA << "Dog: Copy assignment operator called" << RESET << std::endl;
	if (this != &other) {
		Animal::operator=(other); 
	}
	return *this;
}

Dog::~Dog() {
	std::cout << RED << "Dog: Destructor called" << RESET << std::endl;
}

void Dog::makeSound() const {
	std::cout << BLUE << "Dog: Guau!" << RESET << std::endl;
}
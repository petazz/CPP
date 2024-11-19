#include "Dog.hpp"

Dog::Dog() {
	this->brain = new Brain();
	std::cout << GREEN << "Dog: Default constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
	this->brain = new Brain(*other.brain);
	std::cout << YELLOW << "Dog: Copy constructor called" << RESET << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << MAGENTA << "Dog: Copy assignment operator called" << RESET << std::endl;
	if (this != &other) {
		delete this->brain;
		this->brain = new Brain(*other.brain);
		Animal::operator=(other); 
	}
	return *this;
}

Dog::~Dog() {
	delete brain;
	std::cout << RED << "Dog: Destructor called" << RESET << std::endl;
}

void Dog::makeSound() const {
	std::cout << BLUE << "Dog: Guau!" << RESET << std::endl;
}

void Dog::setIdea(int index, const std::string& idea) {
	this->brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const {
	return this->brain->getIdea(index);
}
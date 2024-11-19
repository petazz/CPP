#include "Brain.hpp"

Brain::Brain() {
	std::cout << GREEN << "Brain: Default constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << YELLOW << "Brain: Copy constructor called" << RESET << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other) {
	std::cout << MAGENTA << "Brain: Copy assignment operator called" << RESET << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << RED << "Brain: Destructor called" << RESET << std::endl;
}

std::string Brain::getIdea(int index) const {
	return this->ideas[index];
}

void Brain::setIdea(int index, std::string idea) {
	this->ideas[index] = idea;
}
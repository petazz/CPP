#include "Cat.hpp"

Cat::Cat() {
    std::cout << GREEN << "Cat: Default constructor called" << RESET << std::endl;
    this->brain = new Brain();
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << YELLOW << "Cat: Copy constructor called" << RESET << std::endl;
    this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << MAGENTA << "Cat: Copy assignment operator called" << RESET << std::endl;
    if (this != &other) {
        delete this->brain;
        this->brain = new Brain(*other.brain);
        Animal::operator=(other); 
    }
    return *this;
}

Cat::~Cat() {
    std::cout << RED << "Cat: Destructor called" << RESET << std::endl;
    delete brain;
}

void Cat::makeSound() const {
    std::cout << BLUE << "Cat: Miau!" << RESET << std::endl;
}

void Cat::setIdea(int index, const std::string& idea) {
    this->brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const {
    return this->brain->getIdea(index);
}

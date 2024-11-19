#include "Animal.hpp"
#include "Cat.hpp"

#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
    std::cout << GREEN << "Cat: Default constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    this->type = other.type;
    std::cout << YELLOW << "Cat: Copy constructor called" << RESET << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
    std::cout << MAGENTA << "Cat: Copy assignment operator called" << RESET << std::endl;
    if (this != &other) {
        Animal::operator=(other); 
    }
    return *this;
}

Cat::~Cat() {
    std::cout << RED << "Cat: Destructor called" << RESET << std::endl;
}

void Cat::makeSound() const {
    std::cout << BLUE << "Cat: Miau!" << RESET << std::endl;
}

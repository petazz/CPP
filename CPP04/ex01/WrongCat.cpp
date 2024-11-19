#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << GREEN << "WrongCat: Default constructor called" << RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    this->type = other.type;
    std::cout << YELLOW << "WrongCat: Copy constructor called" << RESET << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    std::cout << MAGENTA << "Wrong Cat: Copy assignment operator called" << RESET << std::endl;
    if (this != &other) {
        WrongAnimal::operator=(other); 
    }
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << RED << "Wrong Cat: Destructor called" << RESET << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << BLUE << "Cat: Miau!" << RESET << std::endl;
}
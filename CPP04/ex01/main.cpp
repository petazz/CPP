#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    Dog dog;
    Cat cat;

    dog.setIdea(0, "I want a bone.");
    dog.setIdea(1, "I want to go for a walk.");

    cat.setIdea(0, "I want to chase a mouse.");
    cat.setIdea(1, "I want to sleep all day.");

    std::cout << "Dog's first idea: " << dog.getIdea(0) << std::endl;
    std::cout << "Dog's second idea: " << dog.getIdea(1) << std::endl;

    std::cout << "Cat's first idea: " << cat.getIdea(0) << std::endl;
    std::cout << "Cat's second idea: " << cat.getIdea(1) << std::endl;

    Dog anotherDog = dog;
    anotherDog.setIdea(0, "I am another dog.");
    std::cout << "Dog's first idea after copy: " << dog.getIdea(0) << std::endl;
    std::cout << "Another dog's first idea: " << anotherDog.getIdea(0) << std::endl;

    return 0;
}

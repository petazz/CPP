#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define MAGENTA "\033[35m"
#define BLUE "\033[34m"
#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif
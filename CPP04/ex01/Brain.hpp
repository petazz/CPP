#ifndef BRAIN_HPP
#define BRAIN_HPP

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

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
		~Brain();
		std::string getIdea(int index) const;
		void setIdea(int index, std::string idea);
} ;

#endif
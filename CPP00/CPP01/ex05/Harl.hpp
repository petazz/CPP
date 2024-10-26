#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>

class Harl {
	public:
	void complein(std::string level);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif

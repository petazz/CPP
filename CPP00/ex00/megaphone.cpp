#include <iostream>
#include <string>

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Error: invalid arguments" << std::endl;
		return 1;
	}
	std::string str = argv[1];
	for (size_t i = 0; i < str.length(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = str[i] - 32;
		}
	}
	std::cout << str << std::endl;
	return 0;
}
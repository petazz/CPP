#include <string>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <fstream>

int main(int argc, char **argv){
	if (argc != 4)
	std::cout << "Enter a valid arguments" << std::endl;
	else {
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];

		if (filename.empty() || s1.empty() || s2.empty())
		{
			std::cout << "Enter a valid arguments" << std::endl;
			exit(0);
		}
		std::fstream file(filename.c_str(), std::ios::in | std::ios::out | std::ios::app);
		std::ofstream newFile((filename + ".replace").c_str(), std::ios::in | std::ios::out | std::ios::app);
		if (!file)
		{
			std::cerr << "The file couldnt be open" << std::endl;
			exit(0);
		}
		std::string line;
		while(std::getline(file, line))
		{
			size_t pos = 0;
			while ((pos = line.find(s1)) != std::string::npos)
			{
				line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
			}
			newFile << line;
		}
		
		file.close();
		return 0;
	}

}
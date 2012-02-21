
#include <cstring>
#include <iostream>
#include <fstream>
#include <sstream>

#include <AbstractVM>
#include <Exception>

int main(int argc, char **argv) {
	try {
		int i = 1;
		std::string file;
		while (i < argc) {
			std::string plugin = argv[i];
			if (plugin.find(".so") != std::string::npos) {
				AbstractVM::getInstance()->plugin(argv[i]);
			}
			else {
				if (!file.size()) {
					file = argv[i];
				}
			}
			i++;
		}
		if (file.size()) {
			std::ifstream flux(file.data());
			AbstractVM::getInstance()->execute(flux);
		}
		else {
			char buffer[4096];
			std::string line = "";
			std::stringstream ss;
			do {
				memset(buffer, 0, 4096);
				std::cin.getline(buffer, 4096);
				line.assign(buffer);
				ss << line << "\n";
				if (line.find(";;") != std::string::npos) {
					break;
				}
				if (std::cin.eof()) {
					std::cin.clear();
					std::cin.ignore();
				}
			}
			while (1);
			AbstractVM::getInstance()->execute(ss);
		}
	}
	catch (AbstractVMException & e) {
		std::cout << "Une erreur est survenu : " << std::endl;
		std::cout << e.what() << std::endl;
	}
	return 0;
}

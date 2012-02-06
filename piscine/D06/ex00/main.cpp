/**
 *
 *
 *
 */

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	int i = 1;
	std::fstream file;
	std::string line;
	if (argc == 1) {
		std::cout << "my_cat: Usage : " << argv[0] << " file [...]" << std::endl;
	}
	else {
		for (i = 1; i < argc; i++) {
			file.open(argv[i], std::ios::in);
			if (file) {
				char line[100];
				int readed;
				while ((readed = file.readsome(line, 100)) != 0) {
					std::cout.write(line, readed);
				}
				file.close();
			}
			else {
				std::cerr << "my_cat: <" << argv[i] << ">: No suchile or directory" << std::endl;
			}
		}
	}
	return 0;
}

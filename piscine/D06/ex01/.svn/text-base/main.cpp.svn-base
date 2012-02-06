/**
 *
 *
 *
 */

#include <string>
#include <iostream>
#include <iomanip>

#define CELSIUS "Celsius"
#define FAHRENHEIT "Fahrenheit"

void print(float temp, std::string unite) {
	std::cout.width(16);
	std::cout << std::right << std::fixed << std::setprecision(3) << temp;
	std::cout.width(16);
	std::cout << unite << std::endl;
}

int main() {
	float temp;
	float conv;
	std::string unite;

	std::cin >> temp >> unite;
	if (!unite.compare(CELSIUS)) {
		conv = temp * 9.0 / 5.0 + 32;
		print(conv, FAHRENHEIT);
	}
	else if (!unite.compare(FAHRENHEIT)) {
		conv = (temp - 32) * 5.0 / 9.0;
		print(conv, CELSIUS);
	}
	return 0;
}

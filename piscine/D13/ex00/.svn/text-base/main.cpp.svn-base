/**
 *
 *
 *
 */

#include <string>

#include "Toy.h"
#include "Buzz.h"
#include "Woody.h"
#include "ToyStory.h"

int main() {
	Toy p1(Toy::ALIEN, "Alien", "ex00/alien.txt");
	Buzz buzz("Buzz", "ex00/buzz.txt");
	Woody woody("Woody", "ex00/woody.txt");

	(void) woody;

	std::string filename("ex00/story.txt");

	ToyStory::tellMeAStory(filename, p1, &Toy::speak, buzz, &Toy::speak_es);
	woody.speak_es("plop");
	std::cout << "Error: " << woody.getLastError().what() << " : " << woody.getLastError().where() << std::endl;
}

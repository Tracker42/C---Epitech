#include <cstdlib>
#include <curses.h>
#include "NCursesDisplayRam.hh"

NCursesDisplayRam::NCursesDisplayRam(MonitorModuleRam *ram)
: ANCursesDisplay("RAM", 6, 66), ram(ram) {

}

NCursesDisplayRam::~NCursesDisplayRam() {

}

void NCursesDisplayRam::display(int x, int y, int x0, int y0) {
	WINDOW *Cwindow;

	int i, j, k;

	initscr();
	start_color();

	init_pair(1, COLOR_WHITE, COLOR_BLUE);
	Cwindow = subwin(stdscr, x, y, x0, y0);

	start_color();
	wbkgd(Cwindow, COLOR_PAIR(1));
	wprintw(Cwindow, " %s | Buffers:%u\tCached:%u\n", this->name.data(), this->ram->getBuffers(), this->ram->getCached());

	i = ((((float) this->ram->getUsedRam() / (float) this->ram->getMaxRam()) * 100) / 2.5);
	wprintw(Cwindow, "\n Ram [");
	for (j = 0; j < i; j++)
		waddstr(Cwindow, "=");
	for (k = j; k < 40; k++)
		waddstr(Cwindow, " ");
	wprintw(Cwindow, "] %3.2f.%%\t[%i/%i]", ((((float) (this->ram->getUsedRam() / (float) this->ram->getMaxRam() * 100) / 2.5) / 40.0) * 100.0),
		this->ram->getUsedRam() / 1000, this->ram->getMaxRam() / 1000);

	i = (((float) this->ram->getUsedSwap() / (float) this->ram->getMaxSwap() * 100) / 2.5);
	wprintw(Cwindow, "\n\n Swp [");
	for (j = 0; j < i; j++)
		waddstr(Cwindow, "=");
	for (k = j; k < 40; k++)
		waddstr(Cwindow, " ");
	wprintw(Cwindow, "] %3.2f.%%\t[%i/%i]", ((((float) (this->ram->getUsedSwap() / (float) this->ram->getMaxSwap() * 100) / 2.5) / 40.0) * 100.0),
		this->ram->getUsedSwap() / 1000, this->ram->getMaxSwap() / 1000);


	wrefresh(Cwindow);
}

bool NCursesDisplayRam::initialize() {
	return true;
}

std::string NCursesDisplayRam::getModuleName() const {
	return "RAM";
}

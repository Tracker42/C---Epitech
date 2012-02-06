#include <cstdlib>
#include <curses.h>
#include "NCursesDisplayCpu.hh"

NCursesDisplayCpu::NCursesDisplayCpu(MonitorModuleCpu *cpu)
: ANCursesDisplay("CPU", 6, 66), cpu(cpu) {

}

NCursesDisplayCpu::~NCursesDisplayCpu() {

}

void NCursesDisplayCpu::display(int x, int y, int x0, int y0) {
	WINDOW *Cwindow;

	int i, j, k, z;

	initscr();
	start_color();

	init_pair(2, COLOR_YELLOW, COLOR_RED);
	Cwindow = subwin(stdscr, x, y, x0, y0);

	start_color();
	wbkgd(Cwindow, COLOR_PAIR(2));
	wprintw(Cwindow, " %s | %s", this->name.data(), this->cpu->getCore(0).getName().data());
	for (z = 0; z < this->cpu->getNbCore(); z++) {
		i = (this->cpu->getCore(z).getLoad() / (2.5));
		wprintw(Cwindow, "\n %i   [", (z + 1));
		for (j = 0; j < i; j++)
			waddstr(Cwindow, "=");
		for (k = j; k < 40; k++)
			waddstr(Cwindow, " ");
		wprintw(Cwindow, "] %2.2f%%\t[%3.2fGHz]", ((this->cpu->getCore(z).getLoad() / 2.5) / 40.0) * 100.0, this->cpu->getCore(z).getFrequency() / 1000.);
	}
	wrefresh(Cwindow);
}

bool NCursesDisplayCpu::initialize() {
	return true;
}

std::string NCursesDisplayCpu::getModuleName() const {
	return "CPU";
}

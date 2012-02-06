#include <curses.h>
#include "NCursesDisplayNetwork.hh"

NCursesDisplayNetwork::NCursesDisplayNetwork(MonitorModuleNetwork *network)
: ANCursesDisplay("NETWORK", 6, 66), network(network) {

}

NCursesDisplayNetwork::~NCursesDisplayNetwork() {

}

void NCursesDisplayNetwork::display(int x, int y, int x0, int y0) {
	WINDOW *Cwindow;

	initscr();
	start_color();

	init_pair(4, COLOR_BLUE, COLOR_WHITE);
	Cwindow = subwin(stdscr, x, y, x0, y0);

	start_color();
	wbkgd(Cwindow, COLOR_PAIR(4));
	wprintw(Cwindow, " %s |\n\n", this->name.data());
	wprintw(Cwindow, " Bytes received : %u \t<|>\tBytes transmited : %u\n\n", this->network->getBytesReceived(), this->network->getBytesTransmited());
	wprintw(Cwindow, " Packets received : %u \t<|>\tPackets transmited : %u", this->network->getPacketsReceived(), this->network->getPacketsTransmited());
	wrefresh(Cwindow);
}

bool NCursesDisplayNetwork::initialize() {
	return true;
}

std::string NCursesDisplayNetwork::getModuleName() const {
	return "NETWORK";
}

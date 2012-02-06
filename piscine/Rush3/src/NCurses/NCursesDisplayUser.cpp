#include <cstdlib>
#include <curses.h>
#include <ctime>
#include "NCursesDisplayUser.hh"

NCursesDisplayUser::NCursesDisplayUser(MonitorModuleUser *user)
: ANCursesDisplay("USER", 6, 66), user(user) {

}

NCursesDisplayUser::~NCursesDisplayUser() {

}

void NCursesDisplayUser::display(int x, int y, int x0, int y0) {
	WINDOW *Cwindow;

	initscr();
	start_color();

	init_pair(3, COLOR_RED, COLOR_YELLOW);
	Cwindow = subwin(stdscr, x, y, x0, y0);

	start_color();
	wbkgd(Cwindow, COLOR_PAIR(3));
	wprintw(Cwindow, " %s |\t\t\t\t%s\t\t\t  | %s\n", this->name.data(), this->user->getCompName().data(), this->user->getSysName().data());
	wprintw(Cwindow, "\t    OS : %s\n", this->user->getOs().data());
	wprintw(Cwindow, "\t       Kernel : %s\n", this->user->getKernel().data());
	time_t a = this->user->getTime();
	time_t b = a - this->user->getUpTime();
	wprintw(Cwindow, " \t\tDate : %s", ctime(&a));
	wprintw(Cwindow, " \t      started on : %s", ctime(&b));
	wrefresh(Cwindow);
}

bool NCursesDisplayUser::initialize() {
	return true;
}

std::string NCursesDisplayUser::getModuleName() const {
	return "USER";
}

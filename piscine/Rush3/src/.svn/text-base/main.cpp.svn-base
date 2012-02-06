/**
 *
 *
 *
 */

#include "module/MonitorModuleCpu.hh"
#include "module/MonitorModuleRam.hh"
#include "NCurses/NCursesDisplayCpu.hh"
#include "NCurses/NCursesDisplayRam.hh"
#include "NCurses/NCursesDisplayUser.hh"
#include "NCurses/NCursesDisplayNetwork.hh"

int main() {
	srand(time(0));
	MonitorModuleCpu mmc;
	MonitorModuleRam mmr;
	MonitorModuleUser mmu;
	MonitorModuleNetwork mmn;

	mmc.initialize();
	mmr.initialize();
	mmu.initialize();
	mmn.initialize();

	while (1) {
		NCursesDisplayUser titi(&mmu);
		titi.display(6, 69, 1, 1);

		NCursesDisplayCpu toto(&mmc);
		toto.display(7, 69, 8, 1);

		NCursesDisplayRam tata(&mmr);
		tata.display(6, 69, 16, 1);

		NCursesDisplayNetwork tutu(&mmn);
		tutu.display(6, 69, 23, 1);

		refresh();
		sleep(1);
	}
}

/**
 *
 *
 *
 */

#ifndef __BORGQUEEN_H__
#define __BORGQUEEN_H__

#include <string>
#include <iostream>

namespace Borg {
	class BorgQueen;
}

#include "Borg.hh"
#include "Federation.hh"
#include "Destination.hh"

namespace Borg {

	class BorgQueen {
	private:

	public:
		bool (Borg::Ship::*movePtr)(Destination d);
		void (Borg::Ship::*firePtr)(Federation::Starfleet::Ship *ship);
		void (Borg::Ship::*destroyPtr)(Federation::Ship *ship);

	public:
		BorgQueen();
		~BorgQueen();

		bool move(Borg::Ship* ship, Destination d);
		void fire(Borg::Ship* ship, Federation::Starfleet::Ship* target);
		void destroy(Borg::Ship* ship, Federation::Ship* target);

	};
}

#endif

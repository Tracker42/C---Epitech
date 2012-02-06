/**
 *
 *
 *
 */

#ifndef __ADMIRAL_H__
#define __ADMIRAL_H__

#include <string>
#include <iostream>

namespace Federation {
	namespace Starfleet {
		class Admiral;
	}
}

#include "Federation.hh"
#include "Borg.hh"
#include "Destination.hh"

namespace Federation {

	namespace Starfleet {

		class Admiral {
		private:
			std::string _name;

		public:
			bool (Federation::Starfleet::Ship::*movePtr)(Destination d);
			void (Federation::Starfleet::Ship::*firePtr)(Borg::Ship *ship);

		public:
			Admiral(std::string name);
			~Admiral();

			bool move(Federation::Starfleet::Ship *ship, Destination d);
			void fire(Federation::Starfleet::Ship *ship, Borg::Ship *target);
		};

	}

}

#endif

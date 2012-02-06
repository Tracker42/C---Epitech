/**
 *
 *
 *
 */

#ifndef __BORG_H__
#define __BORG_H__

#include <string>
#include <iostream>

#include "Warpsystem.hh"

#ifndef _DESTINATION_
#define _DESTINATION_

enum Destination
{
	EARTH,
	VULCAN,
	ROMULUS,
	REMUS,
	UNICOMPLEX,
	JUPITER,
	BABEL
};

#endif

namespace Borg {
	class Ship;
}

namespace Borg {

	class Ship {
	private:
		int _side;
		short _maxWarp;
		WarpSystem::Core *_core;
		Destination _location;
		Destination _home;

		void speak(std::string message);
	public:
		Ship();
		~Ship();

		int getSide();
		short getMaxWarp();
		WarpSystem::Core *getCore();
		bool isStable();
		Destination getLocation();
		Destination getHome();

		void setCore(WarpSystem::Core *core);
		void setLocation(Destination location);
		void setHome(Destination home);

		void setupCore(WarpSystem::Core *core);
		void checkCore();

		bool move(int warp, Destination d);
		bool move(int warp);
		bool move(Destination d);
		bool move();
	};

}

#endif

/**
 *
 *
 *
 */

#ifndef __BORG_H__
#define __BORG_H__

#include <string>
#include <iostream>

namespace Borg {
	class Ship;
}

#include "Warpsystem.hh"
#include "Destination.hh"
#include "Federation.hh"

namespace Borg {

	class Ship {
	private:
		int _side;
		short _maxWarp;
		WarpSystem::Core *_core;
		Destination _location;
		Destination _home;
		int _shield;
		int _weaponFrequency;
		short _repair;

		void speak(std::string message);
	public:
		Ship(int weaponFrenquency, short repair = 3);
		~Ship();

		int getSide();
		short getMaxWarp();
		WarpSystem::Core *getCore();
		bool isStable();
		Destination getLocation();
		Destination getHome();
		int getShield();
		int getWeaponFrequency();
		short getRepair();

		void setCore(WarpSystem::Core *core);
		void setLocation(Destination location);
		void setHome(Destination home);
		void setShield(int shield);
		void setWeaponFrequency(int weaponFrequency);
		void setRepair(short repair);

		void setupCore(WarpSystem::Core *core);
		void checkCore();

		bool move(int warp, Destination d);
		bool move(int warp);
		bool move(Destination d);
		bool move();

		void fire(Federation::Starfleet::Ship *ship);
		void fire(Federation::Ship *ship);
		void stricken(int damage);
		void repair();
	};

}

#endif

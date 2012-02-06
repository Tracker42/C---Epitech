/**
 *
 *
 *
 */

#ifndef __FEDERATION_H__
#define __FEDERATION_H__

#include <string>
#include <iostream>

namespace Federation {
	namespace Starfleet {
		class Ship;
		class Captain;
		class Ensign;
	}
	class Ship;
}

#include "Warpsystem.hh"
#include "Destination.hh"
#include "Borg.hh"

namespace Federation {

	namespace Starfleet {

		class Ship {
		private:
			int _length;
			int _width;
			std::string _name;
			short _maxWarp;
			WarpSystem::Core *_core;
			Captain *_captain;
			Destination _location;
			Destination _home;
			int _shield;
			int _photonTorpedo;

			void speak(std::string message);

		public:
			Ship(int length, int width, std::string name, short maxWarp, int torpedo);
			~Ship();

			int getLength();
			int getWidth();
			std::string getName();
			short getMaxWarp();
			WarpSystem::Core *getCore();
			bool isStable();
			Captain *getCaptain();
			Destination getLocation();
			Destination getHome();
			int getShield();
			int getPhotonTorpedo();

			void setCore(WarpSystem::Core *core);
			void setLocation(Destination location);
			void setHome(Destination home);
			void setShield(int shield);
			void setPhotonTorpedo(int photonTorpedo);

			void setupCore(WarpSystem::Core *core);
			void checkCore();
			void promote(Captain *captain);

			bool move(int warp, Destination d);
			bool move(int warp);
			bool move(Destination d);
			bool move();

			void fire(Borg::Ship *ship);
			void fire(int torpedo, Borg::Ship *ship);
			void stricken(int damage);
		};

		class Captain {
		private:
			std::string _name;
			int _age;

			void speak(std::string message);

		public:
			Captain(std::string name);
			~Captain();

			std::string getName();
			int getAge();

			void setAge(int age);

		};

		class Ensign {
		private:
			std::string _name;

			void speak(std::string message);

		public:
			explicit Ensign(std::string name);
			~Ensign();

			std::string getName();

		};

	}

	class Ship {
	private:
		int _length;
		int _width;
		std::string _name;
		WarpSystem::Core *_core;
		Destination _location;
		Destination _home;

		void speak(std::string message);

	public:
		Ship(int length, int width, std::string name);
		~Ship();

		int getLength();
		int getWidth();
		std::string getName();
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

		void stricken(int damage);
	};

}

#endif

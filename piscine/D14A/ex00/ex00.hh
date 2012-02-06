/**
 *
 *
 *
 */

#ifndef __EX00_H__
#define __EX00_H__


namespace Cluedo {

	class Card {
	protected:
		Card();
		~Card();

	public:
		bool IsPartOfTheCrime() const;

	protected:
		bool _isPartOfTheCrime;
	};

	class Weapon {
	public:

		enum Name {
			Corde,
			Matraque,
			Poignard,
			Cle_Anglaise,
			Chandelier,
			Revolver
		};
		static const Name PartOfTheCrime;

	public:
		Weapon(Weapon::Name name, bool bearsFingerprints);
		~Weapon();

		bool BearsFingerprints() const;
	};

	class Suspect {
	public:

		enum Name {
			Mlle_Rose,
			Pr_Violet,
			Col_Moutarde,
			Dr_Olive,
			Mme_Leblanc,
			Mme_Pervenche
		};
		static const Name PartOfTheCrime;

	public:
		Suspect(Suspect::Name name, bool isLying);
		~Suspect();

		bool IsLying() const;
	};

	class Room {
	public:

		enum Name {
			Cuisine,
			Grand_Salon,
			Veranda,
			Petit_Salon,
			Salle_a_Manger,
			Billard,
			Bibliotheque,
			Bureau,
			Hall
		};
		static const Name PartOfTheCrime;

	public:
		Room(Room::Name name, bool hasSecretPassage);
		~Room();

		bool HasSecretPassage() const;
	};

	class Game {
	public:
		static bool CaseSolved(Weapon* w[], Suspect* s[], Room* r[]);
	};
}

#nedif

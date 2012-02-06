#include <string>
#include <iostream>

#include "ex00/Character.hh"
#include "ex00/Warrior.hh"
#include "ex00/Mage.hh"
#include "ex00/Priest.hh"
#include "ex00/Paladin.hh"
#include "ex00/Hunter.hh"

using namespace std;

int main() {

	Character *kreog = new Character("Kreog", 21);
	cout << "[" << kreog->getName() << "] lvl " << kreog->getLvl() << " enter in tek donjon" << endl;
	cout << "------------Fight---------------" << endl;
	cout << "A goblin attack at close range" << endl;
	cout << "It's at Range Distances" << endl;
	kreog->Range = Character::RANGE;
	cout << "The goblin take " << kreog->RangeAttack() << " damage" << endl;
	cout << "The goblin move forward" << endl;
	cout << "It's at Close Distances" << endl;
	kreog->Range = Character::CLOSE;
	cout << "The goblin take " << kreog->CloseAttack() << " damage" << endl;
	cout << "The goblin attack" << endl;
	kreog->TakeDamage(84);
	cout << "Kreog check his life level => " << kreog->getPv() << endl;
	kreog->Heal();
	cout << "life restored => " << kreog->getPv() << endl;
	kreog->Heal();
	cout << "life restored => " << kreog->getPv() << endl;
	cout << "Kreog check his power level => " << kreog->getPower() << endl;
	kreog->RestorePower();
	cout << "Power restored => " << kreog->getPower() << endl;
	cout << "The stone missed the goblin, and this one finally run away" << endl;
	cout << "------------End Fight---------------" << endl;
	cout << "Kreog hear something" << endl;
	cout << "Kreog is kick by somethings" << endl;
	cout << "------------New Player---------------" << endl;
	Character *thor = new Warrior("Thor", 42);
	cout << thor->getName() << " lvl " << thor->getLvl() << " join the team" << endl;
	cout << "The team walk through a coridor" << endl;
	cout << "------------Fight---------------" << endl;
	cout << "The previous goblin attack" << endl;
	cout << "Thor is at Range Distances" << endl;
	thor->RangeAttack();
	cout << "Thor is at Close Distances" << endl;
	cout << "The goblin strike" << endl;
	thor->TakeDamage(60);
	cout << "the Goblin killed by stike of " << thor->CloseAttack() << " of damage" << endl;
	cout << "------------End Fight---------------" << endl;
	cout << "After this short fight kreog and thor make a litle pause" << endl;
	thor->Heal();
	cout << "Thor pv : " << thor->getPv() << endl;
	cout << "Thor power : " << thor->getPower() << endl;
	kreog->RestorePower();
	thor->RestorePower();
	cout << "A fire ball passes in front of Thor, burning small pieces of his beard" << endl;
	cout << "Gnome stunned" << endl;
	cout << "Dispell launch" << endl;
	Character *sully = new Mage("Sully", 1);
	Character *iopy = new Priest("Iopy", 1);
	cout << "Walking throught the dungeon" << endl;
	cout << "The team don't stop to speak" << endl;
	cout << "------------Fight---------------" << endl;
	cout << "A Dragonet attack at closed range" << endl;
	cout << "The dragonner take " << iopy->CloseAttack() << " damage" << endl;
	cout << "The dragonet is also stun" << endl;
	cout << "Sully is at Close Distances" << endl;
	sully->CloseAttack();
	if (sully->Range == Character::RANGE) {
		cout << "Sully is at Range Distances" << endl;
	}
	cout << "The dragonner is stike by big fire ball ans take " << sully->RangeAttack() << " damage" << endl;
	cout << "The dragonet launch a fire ball in direction of iopy" << endl;
	iopy->TakeDamage(90);
	iopy->Heal();
	cout << "Iopy pv : " << iopy->getPv() << endl;
	cout << "Check Power" << endl;
	cout << "Sully : " << sully->getPower() << endl;
	sully->RestorePower();
	cout << "Sully : " << sully->getPower() << " power" << endl;
	iopy->RangeAttack();
	cout << "Iopy : " << iopy->getPower() << endl;
	iopy->RestorePower();
	cout << "Iopy : " << iopy->getPower() << " power" << endl;
	cout << "------------End Fight---------------" << endl;
	Paladin *bibi = new Paladin("Bibi", 1);
	cout << "Bibi join the team" << endl;
	cout << "------------Fight---------------" << endl;
	cout << "[Troll] Launch a lance" << endl;
	thor->RangeAttack();
	cout << "[Troll] take " << sully->RangeAttack() << " damage" << endl;
	cout << "[Troll] take " << bibi->RangeAttack() << " damage" << endl;
	bibi->Intercept();
	cout << "[Troll] take " << bibi->CloseAttack() << " Damage" << endl;
	cout << "[Troll] Active berserk mode" << endl;
	cout << "[Troll] Strike" << endl;
	bibi->TakeDamage(90);
	cout << "bibi look his power : " << bibi->getPower() << endl;
	cout << "bibi look his life : " << bibi->getPv() << endl;
	bibi->Heal();
	bibi->RestorePower();
	cout << "bibi look his power : " << bibi->getPower() << endl;
	cout << "bibi look his life : " << bibi->getPv() << endl;
	cout << "[Troll] Take " << iopy->RangeAttack() << " damage" << endl;
	cout << "[Troll] uuuuuuuuuuuurggggg" << endl;
	cout << "The troll is dead" << endl;
	cout << "------------End Fight---------------" << endl;
	Hunter *ben = new Hunter("Ben", 1);
	cout << "Ben join the team" << endl;
	cout << "------------Fight---------------" << endl;
	cout << "A Dragon attack" << endl;
	cout << "[Dragon] Take " << ben->CloseAttack() << " Damage" << endl;
	cout << "[Dragon] Take " << ben->RangeAttack() << " Damage" << endl;
	thor->RangeAttack();
	thor->RestorePower();
	bibi->Intercept();
	cout << "[Dragon] Take " << bibi->CloseAttack() << " Damage" << endl;
	cout << "[Dragon] Take " << ben->RangeAttack() << " Damage" << endl;
	ben->CloseAttack();
	cout << "[Ben] missed" << endl;
	ben->RestorePower();
	cout << "Ben look his power : " << ben->getPower() << endl;
	cout << "Ben look his Life : " << ben->getPv() << endl;
	cout << "[Dragon] Take " << kreog->CloseAttack() << " Damage" << endl;
	cout << "The stick hurt the dragon's eye that kill him" << endl;
	cout << "------------End Fight---------------" << endl;







//	Character *newbie = new Character("Newbie", 1);
//	newbie->CloseAttack();
//	newbie->Range = Character::RANGE;
//	newbie->RangeAttack();
//	newbie->TakeDamage(84);
//	cout << "PM : " << newbie->getPower() << endl;
//
//	Warrior *warrior = new Warrior("Minsc", 9);
//	warrior->CloseAttack();
//	cout << "Warrior force : " << warrior->getForce() << endl;
//	warrior->RangeAttack();
//	warrior->CloseAttack();
//	warrior->CloseAttack();
//	warrior->CloseAttack();
//	warrior->CloseAttack();
//	warrior->RestorePower();
//
//	Mage *elminster = new Mage("Elminster", 25);
//	elminster->RangeAttack();
//	cout << "Mage int : " << elminster->getIntelligence() << endl;
//	cout << "Atk : " << elminster->RangeAttack() << endl;
//	cout << "Range : " << elminster->Range << endl;
//	elminster->CloseAttack();
//	cout << "Range : " << elminster->Range << endl;
//
//	Mage *priest = new Priest("Priest", 21);
//	priest->Heal();
//	cout << "Priest Atk : " << priest->CloseAttack() << endl;
//
//	Paladin * paladin = new Paladin("Aelthas", 32);
//	paladin->Heal();
//	paladin->CloseAttack();
//	paladin->Intercept();
//	cout << "Range Atk : " << paladin->RangeAttack() << endl;
//
	Hunter * lat = new Hunter("Latrianna", 24);
	lat->RangeAttack();
	lat->Heal();
//
//	cout << "Atk : " << lat->RangeAttack() << endl;
//
//	priest->TakeDamage(90);
//	cout << "Hp : " << priest->getPv() << endl;
//	priest->Heal();
//	cout << "Hp : " << priest->getPv() << endl;

}
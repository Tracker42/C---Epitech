/**
 *
 *
 *
 */

#include "KoalaSteroid.hh"

KoalaSteroid::KoalaSteroid() {

}

KoalaSteroid::~KoalaSteroid() {

}

std::string KoalaSteroid::getName() const {
	return "KoalaSteroid";
}

std::string KoalaSteroid::beMined(IMiningLaser* laser) const {
	(void) laser;
	return "";
}

std::string KoalaSteroid::beMined(DeepCoreMiner* laser) const {
	(void) laser;
	return "Zazium";
}

std::string KoalaSteroid::beMined(StripMiner* laser) const {
	(void) laser;
	return "Koalite";
}

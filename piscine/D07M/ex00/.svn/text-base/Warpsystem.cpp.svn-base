/**
 *
 *
 *
 */

#include "Warpsystem.hh"

/******************************************************************************/
		/****************************/
		/*WarpSystem::QuantumReactor*/
		/****************************/
/******************************************************************************/

WarpSystem::QuantumReactor::QuantumReactor() {
	_stability = true;
}

WarpSystem::QuantumReactor::~QuantumReactor() {

}

void WarpSystem::QuantumReactor::setStability(bool stability) {
	_stability = stability;
}

bool WarpSystem::QuantumReactor::getStability() {
	return _stability;
}

bool WarpSystem::QuantumReactor::isStable() {
	return getStability();
}

/******************************************************************************/
		/******************/
		/*WarpSystem::Core*/
		/******************/
/******************************************************************************/

WarpSystem::Core::Core(QuantumReactor* coreReactor) {
	_coreReactor = coreReactor;
}

WarpSystem::Core::~Core() {

}

bool WarpSystem::Core::getStability() {
	if (_coreReactor) {
		return _coreReactor->getStability();
	}
	return false;
}

WarpSystem::QuantumReactor *WarpSystem::Core::getQuantumReactor() {
	return _coreReactor;
}

WarpSystem::QuantumReactor *WarpSystem::Core::checkReactor() {
	return getQuantumReactor();
}

bool WarpSystem::Core::isStable() {
	return getStability();
}

/******************************************************************************/

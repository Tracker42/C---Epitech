/**
 *
 *
 *
 */

#include "KoalaBot.h"

KoalaBot::KoalaBot(std::string serial) {
	this->serial = serial;
}

KoalaBot::~KoalaBot() {

}

void KoalaBot::setParts(Arms& arms) {
	this->arms = arms;
}

void KoalaBot::setParts(Legs& legs) {
	this->legs = legs;
}

void KoalaBot::setParts(Head& head) {
	this->head = head;
}

void KoalaBot::swapParts(Arms& arms) {
	setParts(arms);
}

void KoalaBot::swapParts(Legs& legs) {
	setParts(legs);
}

void KoalaBot::swapParts(Head& head) {
	setParts(head);
}

void KoalaBot::informations() const {
	std::cout << "[KoalaBot] " << serial << std::endl;
	arms.informations();
	legs.informations();
	head.informations();
}

bool KoalaBot::status() const {
	return arms.isFunctionnal() && legs.isFunctionnal() const && head.isFunctionnal();
}

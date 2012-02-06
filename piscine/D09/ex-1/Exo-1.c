/**
 *
 *
 *
 */

#include "Exo-1.h"

t_cthulhu *NewCthulhu() {
	t_cthulhu *this = malloc(sizeof(t_cthulhu));
	CthulhuInitializer(this);
	return this;
}

void PrintPower(t_cthulhu *this) {
	printf("Power => %i\n", this->m_power);
}

void Attack(t_cthulhu *this) {
	if (this->m_power >= 42) {
		this->m_power -= 42;
		printf("%s attacks and destroys the city\n", this->m_name);
	}
	else {
		printf("%s can't attack, he doesn't have enough power\n", this->m_name);
	}
}

void Sleeping(t_cthulhu *this) {
	this->m_power += 42000;
	printf("%s sleeps\n", this->m_name);
}

t_koala *NewKoala(char *name, char _isALegend) {
	t_koala *this = malloc(sizeof(t_koala));
	KoalaInitializer(this, name, _isALegend);
	return this;
}

void Eat(t_koala *this) {
	this->m_parent.m_power += 42;
	printf("%s eats\n", this->m_parent.m_name);
}

static void CthulhuInitializer(t_cthulhu *this) {
	printf("----\n");
	this->m_name = malloc(8);
	strcpy(this->m_name, "Cthulhu");
	this->m_power = 42;
	printf("Building Cthulhu\n");
}

static void KoalaInitializer(t_koala *this, char *_name, char _isALegend) {
	CthulhuInitializer(&this->m_parent);
	this->m_parent.m_name = _name;
	this->m_parent.m_power = (_isALegend ? 42 : 0);
	this->m_isALegend = _isALegend;
	printf("Building %s\n", this->m_parent.m_name);
}

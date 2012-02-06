/**
 *
 *
 *
 */

#ifndef __EXO_1_H__
#define __EXO_1_H__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct s_cthulhu {
	int m_power;
	char *m_name;
} t_cthulhu;

typedef struct s_koala {
	t_cthulhu m_parent;
	char m_isALegend;
} t_koala;

t_cthulhu *NewCthulhu();
void Attack(t_cthulhu *this);
void Sleeping(t_cthulhu *this);

t_koala *NewKoala(char *name, char _isALegend);
void Eat(t_koala *this);

static void CthulhuInitializer(t_cthulhu *this);
static void KoalaInitializer(t_koala *this, char *_name, char _isALegend);

#endif

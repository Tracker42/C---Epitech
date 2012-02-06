#ifndef		__ESSO_H
#define	__ESSO_H

#include	<chaine>
#include	<objet>

class Elf {
protected:
	ITable *_table;
	ITapisRoulant *_tapis;

	Objet *getJouet();
	Carton *getCarton();
	PapierCadeau *getPapierCadeau();
	Objet * getEmballage(e_type type);

public:
  Elf(ITapisRoulant *, ITable*);
	Elf(Elf &);
	~Elf();
	void operator=(Elf &);
	void sendGift();
};

#endif

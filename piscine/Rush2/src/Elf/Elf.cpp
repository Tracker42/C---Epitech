#include	<objet>
#include	<chaine>
#include	"Elf.hh"

Elf::Elf(ITapisRoulant *tapis, ITable *table)
{
  this->_table = table;
  _tapis = tapis;
}

Elf::Elf(Elf &other)
{
  this->_table = other._table;
  this->_tapis = other._tapis;
}

Elf::~Elf()
{
}

void Elf::operator=(Elf &other)
{
  this->_table = other._table;
  this->_tapis = other._tapis;
}

Objet * Elf::getJouet()
{
  e_type * in_table = _table->regarder();
  int pos = 0;

  while (in_table[pos] != INCONNU) {
    if (in_table[pos] == PETITPONEY || in_table[pos] == NOUNOURS) {
      break;
    }
    pos++;
  }
  delete[] in_table;
  return _table->take(pos);
}

Carton * Elf::getCarton()
{
  return ((Carton *) getEmballage(CARTON));
}

PapierCadeau * Elf::getPapierCadeau()
{
  return ((PapierCadeau *) getEmballage(PAPIERCADEAU));
}

Objet * Elf::getEmballage(e_type type)
{
  e_type * in_table = _table->regarder();
  int pos = 0;
  int find = 0;

  while (in_table[pos] != INCONNU) {
    if (in_table[pos] == type) {
      find = 1;
      break;
    }
  }
  delete[] in_table;
  if (find) {
    return _table->take(pos);
  }
  Objet * _objet;
  while (!find) {
    _objet = _tapis->take();
    if (!_objet) {
      return NULL;
    }
    else if (_objet->getType() == type) {
      return _objet;
    }
    else {
      if (!_table->put(_objet)) {
	return NULL;
      }
    }
  }
  return (_objet);
}

void Elf::sendGift()
{
  int carton_f = -1;
  int papier_f = -1;
  int jouet_f = -1;
  int i;
  e_type *in_table;
  Jouet *jouet;
  Carton *carton;
  PapierCadeau *papier;

  do
    {
      jouet_f = -1;
      papier_f = -1;
      carton_f = -1;
      while (carton_f < 0 || papier_f < 0)
	{
	  i = 0;
	  if ((in_table = this->_table->regarder()) == NULL)
	    return;
	  while (in_table[i] != INCONNU)
	    {
	      if (in_table[i] == PETITPONEY || in_table[i] == NOUNOURS)
		jouet_f = i;
	      if (in_table[i] == CARTON)
		carton_f = i;
	      if (in_table[i] == PAPIERCADEAU)
		papier_f = i;
	      i++;
	    }
	  if (jouet_f < 0)
	    {
	      return;
	    }
	  if (carton_f < 0 || papier_f < 0)
	    {
	      this->_tapis->IN();
	      Objet *obj;
	      if ((obj = this->_tapis->take()) == NULL)
		return ;
	      if (obj->getType() == CARTON || obj->getType() == PAPIERCADEAU)
		std::cout << "siffle en travaillant" << std::endl;
	      this->_table->put(obj);
	    }
	  else
	    {
	      if ((carton = (Carton*) (this->_table->take(carton_f))) == NULL)
		return;
	      std::cout << "siffle en travaillant" << std::endl;
	      i = 0;
	      if ((in_table = this->_table->regarder()) == NULL)
		return;
	      while (in_table[i] != INCONNU)
		{
		  if (in_table[i] == PAPIERCADEAU)
		    papier_f = i;
		  i++;
		}
	      if ((papier = (PapierCadeau*)this->_table->take(papier_f)) == NULL)
		  return;
	      std::cout << "siffle en travaillant" << std::endl;
	      if (!carton->is_empty())
		{
		  if (carton->is_open())
		    carton->fermeMoi();
		  papier->emballeMoiCa(carton);
		  std::cout << "tuuuut tuuut tuut" << std::endl;
		}
	      else
		{
		  if (!carton->is_open())
		    carton->ouvreMoi();
		  if ((jouet = (Jouet*)this->_table->take(jouet_f)) == NULL)
		    return;
		  jouet->estPris();
		  carton->emballeMoiCa(jouet);
		  std::cout << "tuuuut tuuut tuut" << std::endl;
		  carton->fermeMoi();
		  papier->emballeMoiCa(carton);
		  std::cout << "tuuuut tuuut tuut" << std::endl;
		}
	      this->_tapis->put(papier);
	      this->_tapis->OUT();
	    }
	}
    }
  while (jouet_f > 0);
}

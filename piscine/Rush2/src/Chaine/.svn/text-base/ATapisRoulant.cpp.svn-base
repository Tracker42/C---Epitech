
#include	"ATapisRoulant.hh"

ATapisRoulant::ATapisRoulant()
{
  this->objet = NULL;
}

ATapisRoulant::~ATapisRoulant()
{
  if (this->objet)
    delete objet;
}

Objet *ATapisRoulant::take()
{
  Objet	*tmp;
  if (!this->objet)
    return NULL;
  tmp = this->objet;
  this->objet = NULL;
  return tmp;
}

bool	ATapisRoulant::put(Objet *obj)
{
  if (this->objet)
    return false;
  this->objet = obj;
  return true;
}

e_type  ATapisRoulant::regarder()
{
  if (!this->objet)
    return INCONNU;
  else
    return this->objet->getType();
}

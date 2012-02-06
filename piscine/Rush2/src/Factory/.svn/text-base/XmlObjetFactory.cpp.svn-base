/**
 *
 *
 *
 */

#include "XmlObjetFactory.hh"

XmlObjetFactory::XmlObjetFactory()
  : objet(NULL), count(0), type("") {

}

XmlObjetFactory::~XmlObjetFactory() {

}

Objet*		newObj(std::string& type, std::string& name)
{
  if (!type.compare("PapierCadeau"))
    return new PapierCadeau;
  else if (!type.compare("Carton"))
    return new Carton;
  else if (!type.compare("Nounours"))
    return new Nounours(name);
  else if (!type.compare("PetitPoney"))
    return new PetitPoney(name);
  return 0;
}

//CLAUDE M'A DIT DE FAIRE COMME CA//
void XmlObjetFactory::addToken(std::string & token)
{
  Objet*	tmp = objet;
  std::string	*tab = new std::string[4];

  tab[0] = "PapierCadeau";
  tab[1] = "Carton";
  tab[2] = "Nounours";
  tab[3] = "PetitPoney";

  if (!count && !token.compare(tab[0]))
    ++count;
  if (count == 1 && !token.compare(tab[1]))
    ++count;
  if (count == 2 && (!token.compare(tab[2]) || !token.compare(tab[3])))
    {
      type = token;
      ++count;
    }
  if (count == 3)
    {
      objet = newObj(type, token);
      tmp = new Carton;
      ((Emballage*) tmp)->emballeMoiCa(objet);
      objet = tmp;
      tmp = new PapierCadeau;
      ((Emballage*) tmp)->emballeMoiCa(objet);
      objet = tmp;
      count = 0;
    }
  delete [] tab;
}

Objet * XmlObjetFactory::getObjet() {
	return objet;
}

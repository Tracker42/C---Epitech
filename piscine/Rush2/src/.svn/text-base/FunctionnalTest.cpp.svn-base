/**
 *
 *
 *
 */

#include <objet>
#include <chaine>
#include <logger>

Objet **MesTestUnitaires() {
	Objet **objet = new Objet*[2];
	objet[0] = new PetitPoney("poney gay");
	objet[1] = new Nounours("bisounours");
	return objet;
}

Objet *MesTestUnitaires(Objet **objets) {
  if (!objets) {
    Logger::error("Le sac est vide !!");
    return NULL;
  }
  int size = 0;
  while (objets[size++]);
  if (size != 4) {
    Logger::error("Il manque des choses dans le sac ?!");
    return NULL;
  }
  PapierCadeau *papier = NULL;
  Carton *carton = NULL;
  Jouet *jouet = NULL;
  size = 0;
  while (size < 3) {
    if (objets[size]->getType() == PAPIERCADEAU) {
      papier = (PapierCadeau *) objets[size];
    }
    else if (objets[size]->getType() == CARTON) {
      carton = (Carton *) objets[size];
    }
    else if (objets[size]->getType() == PETITPONEY || objets[size]->getType() == NOUNOURS) {
      jouet = (Jouet *) objets[size];
    }
    size++;
  }
  if (!(papier && carton && jouet)) {
    Logger::error("Il manque des choses ...");
    return NULL;
  }
  carton->ouvreMoi();
  carton->prendMoi();
  carton->emballeMoiCa(jouet);
  carton->fermeMoi();
  papier->prendMoi();
  papier->emballeMoiCa(carton);
  return papier;
}

ITable *creerTable() {
	return new TablePePeNoel();
}

ITapisRoulant *creerTapisRoulant() {
	return new TapisRoulantPePeNoel();
}

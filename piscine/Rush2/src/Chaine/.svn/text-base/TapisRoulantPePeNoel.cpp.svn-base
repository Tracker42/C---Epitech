
#include	<string>
#include	<iostream>

#include	<sender>
#include	"TapisRoulantPePeNoel.hh"

TapisRoulantPePeNoel::TapisRoulantPePeNoel()
{
  this->Objets[0] = new PapierCadeau();
  this->Objets[1] = new PapierCadeau();
  this->Objets[2] = new Carton();
  this->idx = 0;
}

void TapisRoulantPePeNoel::IN()
{
  if (this->idx < 3)
    this->put(this->Objets[idx]);
  idx++;
}

void TapisRoulantPePeNoel::OUT()
{
  Objet *tmp;
  std::string	xml_of_death;
  tmp = this->take();
  if (!tmp)
    return;
  xml_of_death = XmlParser::serialize(tmp);
  if (!SendManager::getInstance()->send(xml_of_death))
    std::cerr << "error sending gift" << std::endl;
  delete tmp;
}

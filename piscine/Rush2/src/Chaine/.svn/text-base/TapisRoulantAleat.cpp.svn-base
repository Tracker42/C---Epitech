
#include	<cstdlib>
#include        <iostream>
#include	<string>

#include        "TapisRoulantAleat.hh"
#include	<objet>
#include	<sender>
#include	<xml>

TapisRoulantAleat::TapisRoulantAleat()
{
  this->objet = NULL;
}

void TapisRoulantAleat::IN()
{
  if (random() % 2)
    this->put(new PapierCadeau);
  else
    this->put(new Carton);
}

void TapisRoulantAleat::OUT()
{
  Objet *tmp;
  std::string	cadeau;
  tmp = this->take();
  if (!tmp)
    return;
  cadeau = XmlParser::serialize(tmp);
  (SendManager::getInstance())->send(cadeau);
  delete tmp;
}

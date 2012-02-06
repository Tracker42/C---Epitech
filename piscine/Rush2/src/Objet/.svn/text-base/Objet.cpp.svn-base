#include	<iostream>
#include	<string>

#include	"Objet.hh"
#include	"PetitPoney.hh"
#include	"Nounours.hh"

Objet::Objet(std::string name, e_type type)
  :_name(name),
   _type(type)
{
}

Objet::Objet(Objet & other)
  :_name(other.getName()),
   _type(other.getType())
{
}

Objet::~Objet()
{
}

void	Objet::operator=(Objet & other)
{
  this->_name = other._name;
}

std::string const     Objet::getName() const
{
  return (this->_name);
}

e_type 	Objet::getType() const
{
  return (this->_type);
}

bool	Objet::is_jouet()
{
  if (this->_type == NOUNOURS || this->_type == PETITPONEY)
    return (true);
  return (false);
}

bool	Objet::is_emballage()
{
  if (this->_type == CARTON || this->_type == PAPIERCADEAU)
    return (true);
  return (false);
}

std::ostream &operator<<(std::ostream& stream, Objet& objet)
{
  stream << "Objet " << objet.getName() << " est un ";
  switch (objet.getType())
    {
    case(NOUNOURS):
      stream << "nounours";
      break;
    case(PETITPONEY):
      stream << "petit poney";
      break;
    case(CARTON):
      stream << "carton";
      break;
    case(PAPIERCADEAU):
      stream << "papier cadeau";
      break;
    default:
      stream << "cthulhu";
      break;
    }
  stream << std::endl;
  return stream;
}

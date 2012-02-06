#include        <iostream>
#include        <string>

#include	"Objet.hh"
#include        "Jouet.hh"

Jouet::Jouet(std::string name, e_type type)
  :Objet(name, type),
   _estpris(false)
{
}

Jouet::Jouet(Jouet & other)
  :Objet(other.getName(), other.getType()),
   _estpris(other.getEstPris())
{
}

Jouet::~Jouet()
{
}

void	Jouet::operator=(Jouet & other)
{
  this->_name = other._name;
  this->_type = other._type;
  this->_estpris = other._estpris;
}

bool     Jouet::getEstPris() const
{
  return (this->_estpris);
}

std::ostream &operator<<(std::ostream &stream, Jouet &jouet)
{
  stream << jouet.getName() << " est " << ((jouet.getEstPris())?"pris":"inutilise") << std::endl;
  return stream;
}

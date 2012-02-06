#include        <iostream>
#include        <string>

#include        "Nounours.hh"

Nounours::Nounours(std::string name)
  :Jouet(name, NOUNOURS)
{
}

Nounours::Nounours(Nounours & other)
  :Jouet(other.getName())
{
}

Nounours::~Nounours()
{
}

void    Nounours::operator=(Nounours & other)
{
  this->_name = other._name;
  this->_type = other._type;
  this->_estpris = other._estpris;
}

bool     Nounours::getEstPris() const
{
  return (Jouet::getEstPris());
}

void	Nounours::estPris()
{
  this->_estpris = true;
  std::cout << "gra hu" << std::endl;
}

std::string const	Nounours::s_type() const
{
  return ("Nounours");
}

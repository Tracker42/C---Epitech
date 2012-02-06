#include        <iostream>
#include        <string>

#include        "PetitPoney.hh"

PetitPoney::PetitPoney(std::string name)
  :Jouet(name, PETITPONEY)
{
}

PetitPoney::PetitPoney(PetitPoney & other)
  :Jouet(other.getName())
{
}

PetitPoney::~PetitPoney()
{
}

void    PetitPoney::operator=(PetitPoney & other)
{
  this->_name = other._name;
  this->_type = other._type;
  this->_estpris = other._estpris;
}

bool    PetitPoney::getEstPris() const
{
  return (Jouet::getEstPris());
}

void    PetitPoney::estPris()
{
  this->_estpris = true;
  std::cout << "yo man" << std::endl;
}

std::string const     PetitPoney::s_type() const
{
  return ("PetitPoney");
}

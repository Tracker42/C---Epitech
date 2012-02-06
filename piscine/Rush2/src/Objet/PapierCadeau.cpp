#include	<iostream>
#include	<string>
#include	"PapierCadeau.hh"

PapierCadeau::PapierCadeau(std::string name)
  :Emballage(name, PAPIERCADEAU)
{
}

PapierCadeau::PapierCadeau(PapierCadeau &other)
  :Emballage(other._name, other._type)
{

}

PapierCadeau::~PapierCadeau()
{
}

void	PapierCadeau::operator=(PapierCadeau &other)
{
  this->_name = other._name;
  this->_type = other._type;
  this->_open = other._open;
  this->_in = other._in;
}

void	PapierCadeau::emballeMoiCa(Objet *to_put)
{
  if (this->_in == NULL)
    {
      this->_in = to_put;
    }
}

std::string const     PapierCadeau::s_type() const
{
  return ("PaperCadeau");
}

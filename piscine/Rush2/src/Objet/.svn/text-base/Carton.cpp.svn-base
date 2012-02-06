#include	<iostream>
#include	<string>
#include	"Carton.hh"

Carton::Carton(std::string name)
  :Emballage(name, CARTON)
{
}

Carton::Carton(Carton &other)
  :Emballage(other._name, other._type)
{

}

Carton::~Carton()
{
}

void	Carton::operator=(Carton &other)
{
  this->_name = other._name;
  this->_type = other._type;
  this->_open = other._open;
  this->_in = other._in;
}

void	Carton::emballeMoiCa(Objet *to_put)
{
  if (this->_in == NULL)
    {
      this->_in = to_put;
    }
}

std::string const     Carton::s_type() const
{
  return ("Carton");
}

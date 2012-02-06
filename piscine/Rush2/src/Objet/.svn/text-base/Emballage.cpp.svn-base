#include	<iostream>
#include	<string>

#include	"Objet.hh"
#include	"Emballage.hh"

Emballage::Emballage(std::string name, e_type type)
  :Objet(name, type),
   _open(false),
   _in(NULL)
{
}

Emballage::Emballage(Emballage & other)
  :Objet(other.getName(), other.getType()),
   _open(other._open),
   _in(other.getObjet())
{
}

Emballage::~Emballage()
{
}

void	Emballage::operator=(Emballage & other)
{
  this->_name = other._name;
  this->_type = other._type;
  this->_open = other._open;
  this->_in = other._in;
}

bool	Emballage::is_empty()
{
  if (!this->_in)
    return (true);
  return (false);
}

bool	Emballage::is_open()
{
  return (this->_open);
}

void	Emballage::ouvreMoi()
{
  this->_open = true;
}

void	Emballage::fermeMoi()
{
  this->_open = false;
}

Objet *	Emballage::getObjet()
{
  return (this->_in);
}

Objet *	Emballage::prendMoi()
{
  Objet *	in;

  in = this->_in;
  this->_in = NULL;
  return (in);
}

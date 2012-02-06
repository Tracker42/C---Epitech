
#include	<string>
#include	<fstream>
#include	<sstream>
#include	<iostream>
#include	<xml>
#include	<objet>
#include	<factory>

int		main(int ac, char **av)
{
  std::fstream		xml;
  int			i;
  std::ostringstream	line;
  Objet*		subject;
  XmlFactoryInterface*	factory = new XmlObjetFactory;
  std::string		tmp;

  for (i = 1; i < ac; ++i)
    {
      xml.open(av[i]);
      if (!xml)
	return -1;
      line << xml;
      tmp = line.str();
      XmlParser::unserialize(tmp, *factory);
      subject = factory->getObjet();
      if (!subject)
	return -1;
      while (subject->is_emballage())
	subject = ((Emballage*)subject)->prendMoi();
      if (subject->is_jouet())
	((Jouet*)subject)->estPris();
      xml.close();
      delete subject;
    }
  return 0;
}

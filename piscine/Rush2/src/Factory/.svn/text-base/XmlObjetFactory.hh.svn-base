/**
 *
 *
 *
 */

#ifndef __XMLOBJETFACTORY_H__
#define __XMLOBJETFACTORY_H__

#include <string>
#include <objet>
#include <xml>

class XmlObjetFactory : public XmlFactoryInterface {
protected:
  Objet *objet;
  int	count;
  std::string type;

public:
	XmlObjetFactory();
	~XmlObjetFactory();

	void addToken(std::string & token);
	Objet * getObjet();
};

#endif

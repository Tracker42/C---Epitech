

/**
 *
 *
 *
 */

#ifndef __XMLFACTORYINTERFACE_H__
#define __XMLFACTORYINTERFACE_H__

#include <objet>
#include <string>

class XmlFactoryInterface {
protected:
	XmlFactoryInterface() {}

public:
	~XmlFactoryInterface() {}

  virtual void addToken(std::string & token) = 0;
  virtual Objet* getObjet() = 0;
};

#endif

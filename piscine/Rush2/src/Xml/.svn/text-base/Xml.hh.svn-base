
#ifndef		__XML_HH__
#define		__XML_HH__

#include	<string>
#include	<iostream>

#include	<objet>
#include	<factory>

class XmlParser {
protected:
	XmlParser();

public:
	virtual ~XmlParser();

	static std::string serialize(Objet * objet);
	static bool unserialize(std::string & xml, XmlFactoryInterface & factory);

};

#endif

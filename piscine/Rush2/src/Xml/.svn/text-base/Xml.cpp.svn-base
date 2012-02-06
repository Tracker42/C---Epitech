#include <string>
#include <sstream>
#include <iostream>

#include "Xml.hh"
#include "XmlFactoryInterface.hh"

XmlParser::XmlParser() {

}

XmlParser::~XmlParser() {

}

std::string XmlParser::serialize(Objet* packet) {
	std::ostringstream xml;
	if (packet) {
		xml << "<" << packet->s_type() << ">\n";
		if (packet->is_emballage()) {
			if (!((Emballage *) packet)->is_empty()) {
			  xml << XmlParser::serialize(((Emballage *) packet)->getObjet());
			}
		}
		else if (packet->is_jouet()) {
		  xml << packet->getName() << "\n";
		}
		xml << "</" << packet->s_type() << ">\n";
	}
	return xml.str();
}

bool XmlParser::unserialize(std::string & xml, XmlFactoryInterface & factory) {
	size_t close;
	std::string token;
	size_t pos1;
	size_t pos2;

	pos1 = xml.find("<");
	if (pos1 != std::string::npos) {
		pos2 = xml.find(">");
		token = xml.substr(pos1 + 1, pos2 - pos1 - 1);
		factory.addToken(token);
		close = xml.find(std::string("</") + token + ">");
		std::string substr = xml.substr(pos2 + 1, close - pos2 - 1);
		return XmlParser::unserialize(substr, factory);
	}
	factory.addToken(xml);
	return true;
}

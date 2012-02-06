#include	<iostream>
#include	<string>
#include	<cstdio>

#include	<xml>
#include	<objet>
#include	<factory>
#include	<sender>
#include	<elf>
#include	<logger>

Objet **MesTestUnitaires();
Objet *MesTestUnitaires(Objet**);

int main() {
	Objet **testObjets;
	Objet * initTest[4];
	Objet *cadeau;
	std::string cadeauXML;
	testObjets = MesTestUnitaires();
	Logger::speak("premier test unitaire : ");
	std::cout <<  *testObjets[0] << *testObjets[1];
	initTest[0] = new PetitPoney("jack");
	initTest[1] = new Carton("cartoon");
	initTest[2] = new PapierCadeau("cadal");
	initTest[3] = NULL;
	cadeau = MesTestUnitaires(initTest);
	cadeauXML = XmlParser::serialize(cadeau);
	Logger::speak("second test unitaire : ");
	Logger::speak(cadeauXML);
	Logger::speak("lancement du programme... appuyez sur une touche pour continuer");
	getchar();

	/* init */
	std::string filename = "cadeau";
	std::string extension = "xml";
	SendFile * sender = new SendFile();
	SendFileStrategyUnique * strategy = new SendFileStrategyUnique();
	strategy->setBaseFileName(filename);
	strategy->setExtension(extension);
	sender->setStrategy(strategy);
	SendManager::getInstance()->registerSender(sender);
	/* init end */
	Elf putin(new TapisRoulantPePeNoel(), new TablePePeNoel());
	putin.sendGift();
	Logger::speak("l'esclave a fini de travailler. il peut maintenant aller se faire fouetter");
	return (0);
}

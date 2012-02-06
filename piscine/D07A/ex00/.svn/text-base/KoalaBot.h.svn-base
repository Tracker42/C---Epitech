/**
 *
 *
 *
 */

#ifndef __KOALABOT_H__
#define __KOALABOT_H__

#include <string>
#include "Parts.h"

class KoalaBot {
private:
	std::string serial;
	Arms arms;
	Legs legs;
	Head head;

public:
	KoalaBot(std::string serial = "Bob-01");
	~KoalaBot();

	void setParts(Arms& arms);
	void setParts(Legs& legs);
	void setParts(Head& head);

	void swapParts(Arms& arms);
	void swapParts(Legs& legs);
	void swapParts(Head& head);

	void informations() const;
	bool status() const;
};

#endif

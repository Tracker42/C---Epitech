/**
 *
 *
 *
 */

#ifndef __KREOGCOM_H__
#define __KREOGCOM_H__

#include <string>
#include <iostream>

class KreogCom {
private:
	int m_serial;
	int m_x;
	int m_y;
	KreogCom *next;

public:
	KreogCom(int x, int y, int serial);
	~KreogCom();

	void addCom(int x, int y, int serial);
	KreogCom *getCom();
	void removeCom();

	void ping() const;
	void locateSquad() const;

};

#endif

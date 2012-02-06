/**
 *
 *
 *
 */

#ifndef __MIXERBASE_H__
#define	__MIXERBASE_H__

#include <string>

#include "Cagette.h"

class MixerBase {
protected:
	bool _plugged;
	int (*_mixfunc)(Cagette &);

public:
	MixerBase();
	int mix(Cagette &) const;

};

#endif

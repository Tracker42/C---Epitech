/**
 *
 *
 *
 */

#ifndef __CORE_HH__
#define	__CORE_HH__

#include "SegmentCode.hh"

class Core {
protected:

public:
	Core();
	virtual ~Core();

	void execute(SegmentCode * instructions);

};

#endif

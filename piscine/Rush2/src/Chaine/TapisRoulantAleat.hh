#ifndef		__TAPISROULANTALEAT_HH__
# define	__TAPISROULANTALEAT_HH__

#include	<objet>

#include	"ATapisRoulant.hh"

class TapisRoulantAleat : public ATapisRoulant
{
public:
  TapisRoulantAleat();
  virtual void IN();
  virtual void OUT();
};

#endif

#ifndef		__ITAPISROULANT_HH__
# define	__ITAPISROULANT_HH__

#include	<objet>

#include	"ObjectManagerInterface.hh"

class  ITapisRoulant : public ObjectManagerInterface
{
public:
  virtual void IN() = 0;
  virtual void OUT() = 0;
  virtual e_type regarder() = 0;
};

#endif

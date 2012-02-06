#ifndef		__OBJECTMANAGER_HH__
# define	__OBJECTMANAGER_HH__

#include	<objet>

class ObjectManagerInterface
{
public:
  virtual Objet *take() = 0;
  virtual bool put(Objet *) = 0;
};

#endif

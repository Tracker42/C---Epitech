#ifndef		__EMBALLAGE_H
# define	__EMBALLAGE_H

#include	<string>
#include	"Objet.hh"

class	Emballage : public	Objet
{
protected:
  bool	_open;
  Objet	*_in;
public:
  Emballage(std::string name = "", e_type = INCONNU);
  Emballage(Emballage &);
  ~Emballage();
  void	operator=(Emballage &);
  
virtual  bool	is_empty();
virtual  bool	is_open();
virtual  void	ouvreMoi();
virtual  void fermeMoi();
  
  Objet	*getObjet();
  Objet	*prendMoi();
  virtual void	emballeMoiCa(Objet *) = 0;
};

#endif

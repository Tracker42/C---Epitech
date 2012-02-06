#ifndef		__CARTON_H
# define	__CARTON_H

#include	<string>
#include	"Emballage.hh"

class	Carton : public	Emballage
{
public:
  Carton(std::string name = "");
  Carton(Carton &);
  ~Carton();
  void	operator=(Carton &);
  virtual void	emballeMoiCa(Objet *);
  virtual std::string const     s_type() const;

};

#endif

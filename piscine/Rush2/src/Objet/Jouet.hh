#ifndef		__JOUET_H
# define	__JOUET_H

#include	<ostream>
#include	<string>
#include	"Objet.hh"

class	Jouet : public Objet
{
protected:
  bool		_estpris;
public:
  Jouet(std::string name = "", e_type type = INCONNU);
  Jouet(Jouet &);
  ~Jouet();
  void	operator=(Jouet &);

  bool 	getEstPris() const;
  public:
  virtual void	estPris() = 0;
  /* 
 virtual bool  is_empty() = 0;
  virtual bool  is_open() = 0;
  virtual void  ouvreMoi() = 0;
  virtual void  fermeMoi() = 0;
  */
};

std::ostream &operator<<(std::ostream &, Jouet&);

#endif

#ifndef		__PETITPONEY_H
# define	__PETITPONEY_H

#include	<string>
#include	"Jouet.hh"

class	PetitPoney : public Jouet
{
public:
  PetitPoney(std::string name = "");
  PetitPoney(PetitPoney &);
  ~PetitPoney();
  void	operator=(PetitPoney &);

  bool     getEstPris() const;
  virtual void  estPris();
  virtual std::string const     s_type() const;
};

#endif

#ifndef		__NOURNOUS_H
# define	__NOURNOUS_H

#include	<string>
#include	"Jouet.hh"

class	Nounours : public Jouet
{
public:
  Nounours(std::string name = "");
  Nounours(Nounours &);
  ~Nounours();
  void	operator=(Nounours &);

  bool     getEstPris() const;
  virtual void  estPris();
  virtual std::string const	s_type() const;
};

#endif

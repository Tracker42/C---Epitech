#ifndef		__OBJET_H
# define	__OBJET_H

#include	<string>
#include	<ostream>

typedef enum
  {
    INCONNU,
    NOUNOURS,
    PETITPONEY,
    CARTON,
    PAPIERCADEAU
  }	e_type;

class	Objet
{
protected:
  std::string   _name;
  e_type	_type;
  
public:
  Objet(std::string name = "", e_type = INCONNU);
  Objet(Objet &);
  ~Objet();
  void	operator=(Objet &);

  bool	is_jouet();
  bool	is_emballage();
  std::string const	getName() const;
  e_type		getType() const;
  virtual std::string const     s_type() const = 0;
};

std::ostream &operator<<(std::ostream&, Objet&);

#endif

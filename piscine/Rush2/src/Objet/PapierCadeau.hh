#ifndef         __PAPER_FOR_ASS_H
# define        __PAPER_FOR_ASS_H

#include        <string>
#include        "Emballage.hh"

class   PapierCadeau : public Emballage
{
public:
  PapierCadeau(std::string name = "");
  PapierCadeau(PapierCadeau &);
  ~PapierCadeau();
  void  operator=(PapierCadeau &);
  virtual void  emballeMoiCa(Objet *);
  virtual std::string const     s_type() const;

};

#endif


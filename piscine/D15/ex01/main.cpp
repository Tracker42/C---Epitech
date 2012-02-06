#include <iostream>

#include "ex01.hpp"

class toto
{
private:
  toto &operator=(const toto&) {return *this;}
  toto(const toto &){}
public:
  bool operator==(const toto&) const {return true;}
  bool operator>(const toto&) const {return false;}
  bool operator<(const toto&) const {return false;}
  toto(){}
};

int main()
{
  toto a, b;

  std::cout << compare(a, b) << std::endl;
  std::cout << compare(1, 2) << std::endl;
  std::cout << compare<const char*>("chaineZ", "chaineA42") << std::endl;
  const char *s1 = "42", *s2 = "45";
  std::cout << compare(s1, s2) << std::endl;

}

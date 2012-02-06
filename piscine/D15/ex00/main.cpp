#include <iostream>
#include <string>
#include "ex00.hpp"

int main()
{
  int a = 2;
  int b = 3;
 
  ::swap(a, b);
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
  std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
  std::cout << "add(a, b) = " << ::add(a, b) << std::endl;

  std::string c = "chaine1";
  std::string d = "chaine2";

  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
  std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
  std::cout << "add(c, d) = " << ::add(c, d) << std::endl;

}

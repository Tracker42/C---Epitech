#include <iostream>
#include "ex02.hpp"

int main()
{

  int tab[2] = {3, -1};
  int minimum = templateMin(tab, 2);

  std::cout << "templateMin(tab, 2) = " << minimum << std::endl;
  minimum = nonTemplateMin(tab, 2);
  std::cout << "nonTemplateMin(tab, 2) = " << minimum << std::endl;
}

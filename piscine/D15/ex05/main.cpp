#include <iostream>
#include "ex05.hpp"

int float_to_int(float const& f) {
  return static_cast<int>(f);
}
int main()
{
  array<int> a(4);
  a[3] = 1;
  const array<int> b = a;
  b.dump();
  array<float> c;
  c.dump();
  c[2] = 1.1;
  c.dump();
  a = c.convertTo<int>(&float_to_int);
  a.dump();

  array<bool> bo(5);
  bo[2] = true;
  bo.dump();

  const array<int> co(2);
  try {
    co[10] = 2;
  }
  catch(std::exception & e) {
    std::cout << "catched!!" << std::endl;
  }
  
}

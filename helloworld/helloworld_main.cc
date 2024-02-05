#include <iostream>

int main() {
#ifdef __clang__
  std::cout << "Hello, world! clang" << std::endl;
#endif

#ifdef __GNUC__
#ifndef __clang__
  std::cout << "Hello, world! GNUC" << std::endl;
#endif
#endif

  return 0;
}
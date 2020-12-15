#include "./Header/test10.hpp"
#include <iostream>

int main()
{
  std::cout << asString(42) << '\n';
  std::cout << asString(std::string("hello")) << '\n';
  std::cout << asString("hello") << '\n';
}

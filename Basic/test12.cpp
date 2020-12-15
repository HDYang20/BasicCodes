#include <iostream>

template<decltype(auto) N>
struct S {
  void printN() const {
    std::cout << "N: " << N << '\n';
  }
};

static const int c = 42;
static int v = 42 ;

int main()
{
  S<c> s1;
  S<(c)> s2;
  s1.printN();
  s2.printN();

  S<(v)> s3;
  v=77;
  s3.printN();
}

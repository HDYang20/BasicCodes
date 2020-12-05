#include <iostream>

struct MyStruct {
  int i = 0 ;
  std::string s;
};

int main(){
  
  MyStruct ms = { 42, "HD" };
  auto && [v,n] = std::move(ms);
  std::cout << "ms.s: " << ms.s << '\n' ;
  std::string s = std::move(n);
  std::cout << "ms.s: " << ms.s << '\n';
  std::cout << "n:    " << n << '\n';
  std::cout << "s:    " << s << '\n';

  MyStruct ms1 = { 43, "HDY" };
  auto [w,m] = std::move(ms1);
  std::cout << "ms1.s: " << ms1.s << '\n';
  std::cout << "m:    " << m << '\n';
  
  std::string ss = std::move(m);
  n = "Kate";
  std::cout << "ms1.s: " << ms1.s << '\n';
  std::cout << "m:    " << m << '\n';
  std::cout << "ss:    " << ss << '\n';

}

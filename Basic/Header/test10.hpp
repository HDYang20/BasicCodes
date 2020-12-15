#include <string>

template <typename T>
std::string asString(T x)
{
  if constexpr(std::is_same_v<T, std::string>){
      return x;
    }
  else if constexpr(std::is_arithmetic_v<T>){
      return std::to_string(x);
    }
  else {
    return std::string(x);
  }
    
}

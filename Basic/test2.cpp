#include <iostream>
#include <string>
#include <thread>

class Data {
private:
  std::string name;
public:
  Data(const std::string& s) : name(s) {
    std::cout << "Data constructed" << '\n';
  }
  ~Data() {
    std::cout << "Data destructed" << '\n';
  }
  std::thread startThreadWithCopyOfThis() const {
    using namespace std::literals;
    std::thread t( [*this] {
	std::this_thread::sleep_for(std::chrono::seconds(4));
	std::cout << name << '\n';
      });
    return t;
    }
};

int main()
{
  std::thread t;
  {
    Data d{"hd"};
    t = d.startThreadWithCopyOfThis();
  }
  t.join();
  
}

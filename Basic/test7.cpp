#include <iostream>

int main() {
	auto greet_hd ([]{ 
		std::cout << "Hello, HD\n";
		});
	greet_hd();
	
}

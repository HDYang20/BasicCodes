#include "./Header/test9.h"
#include <thread>

void hd();

int main()
{
	myThreadData.print("main() begin:");
	
	myThreadData.gName = "thread1 name";
	myThreadData.tName = "thread1 name";
	myThreadData.lName = "thread1 name";
	myThreadData.print("main() later:");
	
	std::thread t(hd);
	t.join();
	myThreadData.print("main() end:");
}
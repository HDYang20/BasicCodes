#include "./Header/test9.h"

void hd()
{
	myThreadData.print("hd() begin:");
	
	myThreadData.gName = "thread2 name";
	myThreadData.tName = "thread2 name";
	myThreadData.lName = "thread2 name";
	
	myThreadData.print("hd() end:");
}
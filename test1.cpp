#include <iostream>

using namespace std;

int main(void)
{
  int ourArray[5];

  for(int& i: ourArray)
    {
      cout<< "Next element is -> ";
      cin>>i;
    }
  
  cout<<"Elements  in array are!"<<endl;
  for(int i: ourArray) cout<<i<<endl;
  
  return 0;
}

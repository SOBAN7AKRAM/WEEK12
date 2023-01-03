#include <iostream>
using namespace std;
 void speedlimit();
main()
{
  while(true)
  {
  speedlimit();
  }
}
 void speedlimit()
 {
 
  float speed;
  cout << "Enter speed(km/h):";
  cin >>speed;
  if(speed>100)
  {
     cout<< "Halt..  YOU WILL BE CHALLENGED!!!"<<endl;
  }
  if(speed<=100)
  {
     cout<< "Perfect! You are going good."<<endl;
  }
 }
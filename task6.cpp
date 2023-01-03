#include <iostream>
using namespace std;
void shop();
main()
{ 
  while(true){
  shop();}
}
 void shop()
 {
     string days;
  int purchase;
  float amount;
  cout<<"Enter day:"; 
  cin>>days;
  cout<<"Enter purchasing amount:";
  cin>>purchase;
  if (days=="sunday")
  { 
    amount=purchase-(purchase*10/100);    
  }
  if (days!="sunday")
  {
    amount=purchase-(purchase*5/100);
  }  
   cout<<"Total amount after discount:"<<amount<<endl;
 }
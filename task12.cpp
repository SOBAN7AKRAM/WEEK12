#include <iostream>
using namespace std;
void flower();
main ()
{
 while(true)
 {
   flower();
 }
}
 void flower()
 {
   
  float totalP;
  float total;
  float red;
  float white;
  float tulips;
  cout<<"Enter red rose number:";
  cin>>red;
  cout<<"Enter white rose number:";
  cin>>white;
  cout<<"Enter tulips rose number:";
  cin>>tulips;
  total=red*2+white*4.10+tulips*2.50;
  cout<<"Total price is:"<<total;
  cout<<"(dollars)"<<endl;
     if(total>=200)
     { 
        totalP=total-(total*20/100);
        cout<<"Price after discount:"<<totalP;
        cout<<"(dollars)"<<endl;
     }
 }
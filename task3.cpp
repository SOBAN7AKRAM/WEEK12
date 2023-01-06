#include <iostream>
using namespace std;
bool symmetric(int num);
main()
{ 
  int num;
  bool isTrue;
  cout <<"enter number";
  cin>>num;
  
  isTrue=symmetric(num);
  cout <<"ans is:"<<isTrue;

}
bool symmetric(int num)
{
  if (num%10==num/100)
  {
    return ;
  }       
    return 0;
}
#include <iostream>
using namespace std;
int evenOdd(int num);
main ()
{
  int num;
  cout <<"Enter number:";
  cin >>num;
  evenOdd(num);
  
 

}
int evenOdd(int num)
{
  int first=num%10;
  int second=(num/10)%10;
  int third=(num/100)%10;
  int fourth=(num/1000)%10;
  int fifth=(num/10000)%10;
  int sum=first+second+third+fourth+fifth;
  if (sum%2==1)
  {
    cout<<"oddish";
  }
  if (sum%2==0)
  {
    cout<<"evennish";
  }

}
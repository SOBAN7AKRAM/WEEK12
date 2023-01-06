#include <iostream>
#include <cmath>
using namespace std;
main()
{
  float num1;
  float num2;
  float result;
  
  cout<<"Enter number:";
  cin>>num1; 
  cout<<"Enter number:";
  cin>>num2;
  
  result=max(num1,num2);
  cout<<"Result is:"<<result<<endl;
  result=min(num1,num2);
  cout<<"Result is:"<<result<<endl;
  result=sqrt(num1);
  cout<<"Result is:"<<result<<endl;
  result=cbrt(num1);
  cout<<"Result is:"<<result<<endl;
  result=pow(num1,4);
  cout<<"Result is:"<<result<<endl;
  result=ceil(num1);
  cout<<"Result is:"<<result<<endl;
  result=floor(num1);


   
}
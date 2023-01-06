#include <iostream>
using namespace std;
int add(int number1,int number2);
float subtracts(float number1,float number2);
main ()
{
  int num1;
  int num2;
  float result;
  cout<<"Enter first number:";
  cin>>num1;
  cout<<"enter second number:";
  cin>>num2;
  result=add(num1,num2);
  cout <<"sum is:"<<result;  
  cout<<endl;   
  result=subtracts(num1,num2);
  cout <<"division:"<<result;
}
 int add(int number1,int number2)
 {
   int sum=number1+number2;
   return sum;  
 }
 float subtracts(float number1,float number2)
 {
   float subtracts=number1/number2;
   return subtracts;  
 }
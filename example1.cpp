#include <iostream>
using namespace std;
int isGreater(int number1,int number2);
int isSmaller(int number1,int number2);
main ()
{
  int num1;
  int num2;
  int greater;
  int smaller;
  cout <<"Enter first number:";
  cin>>num1;
  cout<<"Enter second number:";
  cin>>num2;
  greater=isGreater(num1,num2);
  cout<<"greater number is:"<<greater;
  cout<<endl;
  smaller=isSmaller(num1,num2);
  cout<<"smaller number is:"<<smaller;
    
}
int isGreater(int number1,int number2)
{ 
   if(number1>number2)
   {
     return number1;
   }
   if(number1<number2)
   {
     return number2;
   }   
   return 0;
}
int isSmaller(int number1,int number2)
{
   if(number1<number2)
   {
     return number1;
   }
   if(number2<number1)
   {
     return number2;
   }
   return 0;
}
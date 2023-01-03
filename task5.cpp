#include <iostream>
using namespace std;
void num();
main()
{
  while(true){  
  num();}
}
 void num()
 {
  int number1;
  int number2;
  cout << "Enter first number:";
  cin >>number1;
  cout <<"Enter second number:";
  cin>>number2;
  if (number1>=number2) 
  {
    cout <<number1<<endl;
  }
  if (number1<number2)
  {
    cout <<number2<<endl;
  } 
 }
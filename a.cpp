#include <iostream>
using namespace std;

void add(int num1,int num2);
void product(int num1,int num2);
void subtracts(int num1,int num2);
void division(int num1,int num2);
main () {
  int num1;
  int num2;
  char operation;
  cout << " Enter first number: ";
  cin >> num1;
  cout << " Enter second number: ";   
  cin >> num2;
  cout << "Enter operation: ";
  cin >> operation;
  if(operation== '+'){
  add(num1,num2);}
  if(operation=='*'){
  product(num1,num2);}
  if(operation=='-'){
  subtracts(num1,num2);}
  if(operation=='/'){
  division(num1,num2);}
}
void add(int num1,int num2)
{
 int sum;
 sum=num1+num2;
 cout << "sum: "<< sum <<endl;
}
void product(int num1,int num2)
{
  int multiply;
  multiply=num1*num2;
  cout << " Product : " << multiply << endl;
}
void subtracts(int num1,int num2)
{
  int minus;
  minus=num1-num2;
  cout << "Subtracts: "<< minus;

}
void division(int num1,int num2)
{
 int divide;
 divide=num1/num2;
 cout << "division is: "<< divide<<endl;
}
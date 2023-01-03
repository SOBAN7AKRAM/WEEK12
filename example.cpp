#include <iostream>
using namespace std;
void add();
void product();
main () {
  add();
  product();
  add();
  product();
}

void add(){
 int number1;
  int number2;
  int sum;
  cout << "Enter First Number: ";
  cin >> number1;
  cout << "Enter Second Number: ";
  cin >> number2;
  sum=number1+number2;
  cout << "Sum is: " << sum <<endl;
}
void product(){
 int num1;
  int num2;
  int products;
  cout << "Enter First Number: ";
  cin >> num1;
  cout << "Enter Second Number: ";
  cin >> num2;
  products=num1*num2;
  cout << "Product is:" << products <<endl;
}
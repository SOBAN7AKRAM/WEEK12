#include <iostream>
using namespace std;
main () {
int number;
int first;
int second;
int third;
int fourth;
int sum;
cout << " Enter any four digits: ";
cin >> number;
first=number%10;
second=(number/10)%10;
third=(number/100)%10;
fourth=(number/1000)%10;
sum=first+second+third+fourth;
cout << "Sum:"<<sum;





}
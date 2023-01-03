#include <iostream>
using namespace std;
main () {
string movie;
int childPrice;
int adultPrice;
int adultSold;
int childSold;
int totalAmount;
float amountLeft;
float per;
cout << "Enter movie name:";
cin >> movie;
cout << " Enter child ticket price:";
cin >> childPrice;
cout << "Enter adult ticket price:";
cin >> adultPrice;
cout << "Enter number of adult ticket sold:";
cin >> adultSold;
cout << "Enter number of child ticket sold:";
cin >> childSold;
cout << "Enter percentage to donate:";
cin >> per;
totalAmount=childPrice*childSold+adultPrice*adultSold;
cout <<" _______________________________________ "<<endl;
cout << "Total amount generated:"<<totalAmount<<endl;
amountLeft=totalAmount-(totalAmount*per/100.0);
cout << "Amount after donation:"<<amountLeft;





}
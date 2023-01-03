#include <iostream>
using namespace std;
void isEligible(int age);
main()
{
 int age;
 while(true)
 {
 isEligible(age);
 }
}
void isEligible(int age){
 
  cout << "Enter your age:";
  cin >> age;
  if (age>=18)
  {
    cout << " You are Eligible "<<endl;
  }


}
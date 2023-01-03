#include <iostream>
using namespace std;
void checkresult(int marks);
main() 
{
  while(true)
 {
   int marks;
   cout << "Enter your marks: ";
   cin >> marks;
   checkresult(marks);
 }
}
  void checkresult(int marks)
 {

 
 if (marks> 50)
 {
   cout << " pass "<<endl;
 }
 if (marks<50)
 {
   cout << " Fail "<<endl;
 }
 if (marks==50)
 {
   cout<< " Parh ly bhai 50 marks leny sy ghar ni chalty "<<endl; 
 }


}
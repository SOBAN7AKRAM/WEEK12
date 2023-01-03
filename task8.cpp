#include <iostream>
using namespace std;
void truefalse();
main()
{
  truefalse();
} 
 void truefalse()
   {
       int num1;
       int num2;
       while(true){
       cout <<"Enter First Number:";
       cin>>num1;
       cout <<"Enter Second Number:";
       cin>>num2;
  
       if (num1==num2)
       {
         cout << "True" <<endl;
       }
       if (num1!=num2)
       {
       cout << "False"<<endl;
       }
     }

}
 
 
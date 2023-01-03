#include <iostream>
using namespace std;
void changer();
main()
{
changer();

}
 void changer()
 { 
   while(true){
   string truefalse;
   
   cout<< "Enter true or false :";
   cin >> truefalse;
   if (truefalse=="true") 
   {
      cout << "False"<<endl;
   }
   if (truefalse=="false")
   {
      cout << "True"<<endl;
   } 
              }
 }
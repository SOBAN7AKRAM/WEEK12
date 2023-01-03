#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void move(int x,int y);
void nameS();
void nameO();
void nameB();
void nameA();
void nameN();
main()
{
 system("cls");
 int x;
 int y;
 gotoxy(x,y);
 nameS();
 nameO();
 nameB();
 nameA();
 nameN();
 
   


}
 void gotoxy(int x,int y)
 {
   COORD coordinates;
   coordinates.X=x;
   coordinates.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
 }
void nameS()
 { gotoxy(16,16);
   cout<<"  S S   "<<endl;
   gotoxy(16,17);
   cout<<" S   S  "<<endl;
   gotoxy(16,18);
   cout<<"   S    "<<endl;
   gotoxy(16,19);
   cout<<" S   S  "<<endl;
   gotoxy(16,20);
   cout<<"  S S   "<<endl;  
 }
void nameO()
 { gotoxy(24,16);
   cout<<" o o o  ";
   gotoxy(24,17);
   cout<<"o     o ";
   gotoxy(24,18);
   cout<<"o     o ";
   gotoxy(24,19);
   cout<<"o     o ";
   gotoxy(24,20);
   cout<<" o o o  ";
 }
void nameB()
 { gotoxy(32,16);
   cout<<"B B B ";
   gotoxy(32,17);
   cout<<"B    B  ";
   gotoxy(32,18); 
   cout<<"B B B  ";
   gotoxy(32,19);
   cout<<"B    B ";
   gotoxy(32,20);
   cout<<"B B B   ";
 }
void nameA()
 { gotoxy(40,16);
   cout<<"    A ";
   gotoxy(40,17);
   cout<<"   A A ";
   gotoxy(40,18);
   cout<<"  A A A ";
   gotoxy(40,19);
   cout<<" A     A ";
   gotoxy(40,20);
   cout<<"A       A ";
 }
void nameN()
 { gotoxy(50,16);
   cout<<"N       N ";
   gotoxy(50,17);
   cout<<"N N     N  ";
   gotoxy(50,18);
   cout<<"N   N   N ";
   gotoxy(50,19);
   cout<<"N     N N ";
   gotoxy(50,20);
   cout<<"N       N  ";
 }



 
#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void nameA();
void nameW();
void nameAA();
void nameI();
void nameS();

main () 
{  
   system("cls");
   int x;
   int y;
   gotoxy(x,y);
   nameA();
   nameW();
   nameAA();
   nameI();
   nameS();

}
 void gotoxy(int x,int y)
 {
   COORD coordinates;
   coordinates.X=x;
   coordinates.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
 }


void nameA()
 { gotoxy(38,16);
   cout<<"    A ";
   gotoxy(38,17);
   cout<<"   A A ";
   gotoxy(38,18);
   cout<<"  A A A ";
   gotoxy(38,19);
   cout<<" A     A ";
   gotoxy(38,20);
   cout<<"A       A ";
 }
void nameW()
 { gotoxy(48,16);
   cout << " W    W    W";
   gotoxy(48,17);
   cout << " W   W W   W ";
   gotoxy(48,18);
   cout << " W  W   W  W  ";
   gotoxy(48,19);
   cout << " W W     W W"; 
   gotoxy(48,20);
   cout << " WW       WW ";
 }
void nameAA()
{ gotoxy(61,16);
   cout<<"    A ";
   gotoxy(61,17);
   cout<<"   A A ";
   gotoxy(61,18);
   cout<<"  A A A ";
   gotoxy(61,19);
   cout<<" A     A ";
   gotoxy(61,20);
   cout<<"A       A ";
 }
void nameI()
 { gotoxy(70,16);
   cout << " IIIII";
   gotoxy(70,17);
   cout << "   I  ";
   gotoxy(70,18);
   cout << "   I  ";
   gotoxy(70,19);
   cout << "   I   ";
   gotoxy(70,20);
   cout << " IIIII  ";
 }
void nameS()
 { gotoxy(76,16);
   cout<<"  S S   "<<endl;
   gotoxy(76,17);
   cout<<" S   S  "<<endl;
   gotoxy(76,18);
   cout<<"   S    "<<endl;
   gotoxy(76,19);
   cout<<" S   S  "<<endl;
   gotoxy(76,20);
   cout<<"  S S   "<<endl;  
 }

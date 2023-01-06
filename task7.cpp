#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void maze();
void movedown(int x,int y);
void moveup(int x,int y);
main ()
{
    system ("cls");
    maze();
    int x=10;
    int y=2;
    int direction=0;
    while (true)
    {
       if (direction==0)
       {
        y=y+1;
        movedown(x,y);
       }
       if(y==8)
       {
        direction=1;
       }
       
       if(direction==1)
       {        
        y=y-1;
        moveup (x,y);
       }     
       moveup(x,y);  
       if(y==1)
       
       {
        direction=0;
       }


    } 

}
 void maze()
 {
    cout << "****************************************" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl; 
    cout << "*                                      *" << endl; 
    cout << "*                                      *" << endl; 
    cout << "*                                      *" << endl; 
    cout << "*                                      *" << endl; 
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl; 
    cout << "****************************************";
 }
 void gotoxy(int x,int y)
 {
   COORD coordinates;
   coordinates.X=x;
   coordinates.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
 }
 void movedown(int x,int y)
 {
   gotoxy(x,y-1);
   cout<<" ";
   gotoxy(x,y);
   cout<<"P";
   Sleep (50);
 }
 void moveup(int x,int y)
 {
   gotoxy(x,y+1);
   cout<<" ";
   gotoxy(x,y);
   cout<<"P";
   Sleep(50);
 }
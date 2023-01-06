#include <iostream>
#include <conio.h>
using namespace std;
void header();
int menu();
float aggregate(int matric,int inter,int ecat);
main ()
{
  system ("cls");
  string sname1,sname2;
  float aggregate1=0,aggregate2=0;
  int matric1=0,matric2=0;
  int first1=0,first2=0;
  int ecat1=0,ecat2=0;
  float merit1,merit2;

  while (true)
  {
     header ();
     int options=menu ();
     if (options==1)
     {
        cout<<"Enter Student Name:";
        cin>>sname1;
        cout<<"Enter Obtained Marks in Matric:";
        cin>>matric1;
        cout<<"Enter Obtained Marks in Inter:";
        cin>>first1;
        cout<<"Enter Obtained Marks in ECAT:";
        cin>>ecat1;  
     }
     if (options==2)
     {
        cout<<"Enter Student Name:";
        cin>>sname2;
        cout<<"Enter Obtained Marks in Matric:";
        cin>>matric2;
        cout<<"Enter Obtained Marks in Inter:";
        cin>>first2;
        cout<<"Enter Obtained Marks in ECAT:";
        cin>>ecat2;  
     }
     if (options==3)
     {
        aggregate1=aggregate(matric1,first1,ecat1);
        aggregate2=aggregate(matric2,first2,ecat2);

     }
     if (options==4)
     {
        cout<<"Following students exists in the system..."<<endl;
        cout<<"Name"<<"\t"<<"Matric"<<"\t"<<"Inter"<<"\t"<<"ECAT"<<"\t"<<"Merit"<<endl;
        cout<<sname1<<"\t"<<matric1<<"\t"<<first1<<"\t"<<ecat1<<"\t"<<aggregate1<<endl;
        cout<<sname2<<"\t"<<matric2<<"\t"<<first2<<"\t"<<ecat2<<"\t"<<aggregate2<<endl;
     }
     if (options==5)
     {
        return 0;
     }
     cout <<"Press any key to continue..";
     getch();
     system ("cls");
  }

}
void header()
{
    cout<<"***************************************************************"<<endl;
    cout<<"*               UNIVERSITY ADMISSION MANAGEMENT               *"<<endl;
    cout<<"*                         SYSTEM                              *"<<endl;
    cout<<"***************************************************************"<<endl;
}
int menu()
{
    int options;
    cout<<"Select one of the following option..."<<endl;
    cout<<"1..Enter first student records  "<<endl;
    cout<<"2..Enter second student records"<<endl;
    cout<<"3..Calculate aggregate          "<<endl;
    cout<<"4..Print both students data     "<<endl;
    cout<<"5..Exit"<<endl;
    cout<<"Your option...";
    cin>>options;
    return options;
}
float aggregate(int matric,int  inter,int ecat)
{
   float calculateaggregate=((0.25*matric/1100)+(0.45*inter/550)+(0.30*ecat/400))*100;
   return calculateaggregate;
}
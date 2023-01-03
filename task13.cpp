#include <iostream>
using namespace std;
void tom();
int time1;
  int time;
  int workingdays;
  int holidays;
  int time2;
  int time3;
  int time4;
  int time5;
  int time6;
 
main ()
{ 
  system ("cls");
  while(true){
  cout << "Enter Holidays:";
  cin>>holidays;
  workingdays=365-holidays;
  time=(workingdays*63+holidays*127);
  time1=30000-time;
  time2=(time1)/60;
  time3=time1-(time2*60);
  time4=time-30000;
  time5=time4/60;
  time6=time4-(60*time5);
  tom();}
}

 void tom()
    {
      if(time<=30000)
  {
     cout<<"Tom sleeps well."<<endl;
     cout<<time2<<" hours and ";
     cout<<time3<<" minutes less for play"<<endl;
  }  
  if(time>=30000)
  {
     cout<<"Tom will run away"<<endl;
     cout<<time5<<" hours and ";
     cout<<time6<<" minutes for play"<<endl;
  }



    }
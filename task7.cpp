#include <iostream>
#include <cmath>
using namespace std;
main ()
{
   int volume,flow1,flow2,flowvolume,volumeP;
   float hours;
   cout<<"Enter the total volumes of the pool in liters:";
   cin>>volume;
   cout<<"Enter the flow rate of pipe 1 per hour:";
   cin>>flow1;
   cout<< "Enter the flow rate of pipe 2 per hour:";
   cin>>flow2;
   cout<<"Enter the hours that the worker is absent:";
   cin>>hours;
   flowvolume=(flow1+flow2)*hours;
   int overflow=flowvolume-volume;
   volumeP=(flowvolume *100) / volume;
   int percentage1=(flow1*100)/(flow1+flow2);
   int percentage2=(flow2*100)/(flow1+flow2);
   if (flowvolume<volume)
   {
      cout<<"The pool is "<<volumeP<<"% full."<<"Pipe 1: "<<percentage1<<"%."<<"Pipe 2: "<<percentage2<<"%."<<endl;
   }
   if (flowvolume>volume)
   {
     cout<<"For "<<hours<<" hours the pool overflows with "<<overflow<<" liters:"<<endl;
   } 
}

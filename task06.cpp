#include <iostream>
using namespace std;
main () {
string name;
int matric;
int inter;
int ecat;
float matricP;
float interP;
float ecatP;
float matricW;
float interW;
float ecatW;
float totalP;
cout << " enter name:" ;
cin >> name;
cout << " enter matric marks: ";
cin >> matric;
cout << "enter inter marks:" ;
cin >> inter;
cout << " enter ecat marks:";
cin >> ecat;
matricP=matric*100/1100;
interP=inter*100/550;
ecatP=ecat*100/400;
matricW=matricP*10/100;
interW=interP*40/100;
ecatW=ecatP*50/100;
totalP=matricW+interW+ecatW;
cout << "your aggregate is: " << totalP;


}
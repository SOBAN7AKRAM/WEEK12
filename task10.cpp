#include <iostream>
using namespace std;
void ticketmanager();
main ()
{
  while(true)
 {
  ticketmanager();
 }
}

   void ticketmanager()  
  {
    float price;
    float totalprice;
    string country;
    cout << "Enter your country name (First letter capital):";
    cin >> country;
    cout << "Enter ticket price in dollars:";
    cin >> price;
    if (country=="Pakistan")
    {
    totalprice=price-(price*5/100);
    cout << "Total ticket price:"<<totalprice;
    cout << "(dollars)"<<endl;
    }
    if (country=="Ireland")
    {
    totalprice=price-(price*10/100);
    cout << "Total ticket price:"<<totalprice;
    cout << "(dollars)"<<endl;
    }
    if (country=="India")
    {
    totalprice=price-(price*20/100);
    cout << "Total ticket price:"<<totalprice;
    cout << "(dollars)"<<endl;
    }
    if (country=="England")
    {
    totalprice=price-(price*30/100);
    cout << "Total ticket price:"<<totalprice;
    cout << "(dollars)"<<endl;
    }
    if (country=="Canada")
    {
    totalprice=price-(price*45/100);
    cout << "Total ticket price:"<<totalprice;
    cout << "(dollars)"<<endl;
    }
  

 }
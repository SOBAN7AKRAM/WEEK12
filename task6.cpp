#include <iostream>
using namespace std;
string numbertens(int tens);
string numberones(int ones);
main()
{
    int number;
    string result1;
    string result2;
    int ones,tens;
    cout <<"Enter any two number from 1 to 99 (except 11-19)";
    cin>>number;
    ones=number%10;
    tens=number/10;
    if (number==10)
    {
        cout <<"ten";
    }
    if (tens==0)
    {
        cout<<numberones(ones);
         return 0; 
    }
    result1=numbertens(tens);
    result2=numberones(ones);
    cout <<result1;
    cout<<" ";
    cout <<result2;

    
}
string numbertens(int tens)
{
   string twenty="twenty" , thirty="thirty",forty="forty",fifty="fifty",sixty="sixty",
   seventy="seventy",eighty="eighty",ninty="ninty";
   if (tens==0)
   {
    cout<<" ";
   }
   if (tens==2)
   {
    return twenty;
   }
   if (tens==3)
   {
    return thirty;
   }
   if (tens==4)
   {
    return forty;
   }
   if (tens==5)
   {
    return fifty;
   }
   if (tens==6)
   {
    return sixty;
   }
   if (tens==7)
   {
    return seventy;
   }
   if (tens==8)
   {
    return eighty;
   }
   if (tens==9)
   {
    return ninty;
   }
    return "0"; 

}
string numberones(int ones)
{
    string one="one",two="two",three="three",four="four",five="five",six="six",
    seven="seven",eight="eight",nine="nine";
    if (ones==1)
    {
        return one;
    }
    if (ones==2)
    {
        return two;
    }
    if (ones==3)
    {
        return three;
    }
    if (ones==4)
    {
        return four;
    }
    if (ones==5)
    {
        return five;
    }
    if (ones==6)
    {
        return six;
    }
    if (ones==7)
    {
        return seven;
    }
    if (ones==8)
    {
        return eight;
    }
    if (ones==9)
    {
        return nine;
    }
    return "0";
}
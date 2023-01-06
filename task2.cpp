#include <iostream>
#include <cmath>
using namespace std;
float positiveQ(float a,float b,float c);
float negativeQ(float a,float b,float c);
main ()
{
  float a;
  float b;
  float c;
  float result;
  cout <<"enter value of a:";
  cin>>a;
  cout <<"enter value of b:";
  cin>>b;
  cout <<"enter value of c:";
  cin>>c;
  result=positiveQ(a,b,c);
  cout<<"positive quadrant is:"<<result<<endl;
  result=negativeQ(a,b,c);
  cout<<"negative quadrant is:"<<result;

  

}
float positiveQ(float a,float b,float c)
{
  float disc=pow(b,2)-(4*a*c);
  float square=sqrt(disc);
  float positive=(-b+square)/(2*a);
  return positive;
}
float negativeQ(float a,float b,float c)
{
  float disc=pow(b,2)-(4*a*c);
  float square=sqrt(disc);
  float negative=(-b-square)/(2*a);
  return negative;
}
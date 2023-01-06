#include <iostream>
#include <cmath>
using namespace std;
float height(float distance,float degree);
main()
{
  float angle;
  float distance;
  float result;
  cout <<"enter angle:";
  cin >>angle;
  cout <<"enter distance:";
  cin >>distance;
  result=height(distance,angle);
  cout <<"height is:"<<result;

  
}
float height(float distance,float degree)
{
  float radian=degree/57.2958;
  float height=distance*tan(radian);
  return height;
}
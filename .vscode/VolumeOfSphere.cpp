//Calculate volume of sphere
#include<iostream>
using namespace std;
int main()
{
  //Formula  V = 4/3 * 3.14 * r*r*r
  float V,r;
  cout<<"Enter the value of Sphere  = "<<endl;
  cin>>r;
  V = (4*3.14*r*r*r)/3;
  cout<<"Volume of sphere = "<<V;

}
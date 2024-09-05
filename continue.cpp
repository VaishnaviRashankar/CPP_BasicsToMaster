//Continue : if you want to skip perticular condition at that time

#include<iostream>
using namespace std;
int main()
{
  for (int i=1;i<=20;i++)
  {
    if(i==3 || i==8) //Skip this
     continue;  
    cout<<i<<" ";
  }
}
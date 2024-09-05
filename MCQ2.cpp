#include<iostream>
using namespace std;
int main()
{
    // int x=10,y=20;
    // if(x==y);//because of this semicolon
    // {
    //     cout<<x<<" "<<y;//This line is independant o/p : 10 20
    // }

    // int x=3 , y=5;
    // if(x==3)
    // {
    // cout<<x;
    // }
    // else;
    // {
    //     cout<<y;//because this line is independant
    // }


    int x=3,y,z; 
    y=x=10;
    z=x<10;//z=0 becauxse false =0
    cout<<x<<" "<<y<<" "<<z;
} 

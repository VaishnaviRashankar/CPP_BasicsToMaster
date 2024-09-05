//Given a point (x,y) ,write a program to find out if it lies in the 1st Quadrant , 2nd Quadrant , 3rd Quadrant,4th Quadrant , on the x-axis,y-axis or at the orgin,viz(0,0)
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the points (x,y): ";
    cin>>x>>y;
    if(x>0 &&y>0)
    {
        cout<<"Given point is in the 1st Quadrant ^_^ ";

    }
    else if (x<0 && y<0)
    {
        cout<<"Given point is in the 3rd Quadrant ^_^ ";
    }
    else if(x<0 && y>0)
    {
        cout<<"Given point is in the 2st Quadrant ^_^  ";
    }
    else
    {
        cout<<"Given point is in the 4st Quadrant ^_^  ";
    }
} 

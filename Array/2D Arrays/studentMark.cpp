// Write a program to store roll number and marks obtained by 4 students side by side in a matrix
#include<iostream>
using namespace std;
int main()
{
    
    int arr[4][2];
    cout<<"Enter roll no, & marks for 4 students:"<<" ";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
         cout<<endl;  
        
    }
 

}
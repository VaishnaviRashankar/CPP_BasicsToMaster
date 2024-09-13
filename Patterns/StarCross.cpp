// print the given pattern
/*
   *      *
    *    *
      *
    *   *
   *     *
We use Nested Loop
*/
#include<iostream>
using namespace std;
int main()
{
    int size;

    cout << "Enter the size of the cross: ";
    cin >> size;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i==j||i+j==size-1)
            {
                cout<<"*";
            }
            else
            {
            cout<<" ";
            }
            
        }
        cout<<endl;
    }
}
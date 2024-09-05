// If the ages of Ram , Shyam and Ajay are input through the keyboard. write a program to determine the yougest of the three
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the Ages of Ram, Shyam and Ajay :";
    cin >> a >> b >> c;
    if (a < b)
    {
        if (a < c)
        {
            cout << "Ram is yougest";
        }
        else
        {
            cout << "Ajay is yougest";
        }
    }
    else
    {
        if (b < c)
        {
            cout<<"Shyam is yougest ";
        }
        else
        {
            cout<<"Ajay is yougest";
        }
    }
}
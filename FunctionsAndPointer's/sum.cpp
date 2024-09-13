// Paramterize function

// This is the example of pass by value
#include <iostream>
using namespace std;

void sum(int a, int b) // Formal Parameters
{
    cout << a + b;
}
int main()
{
    cout << "Addition of two number :" << endl;
    sum(2, 3); // Actual Paramaters
}

// void add()
// {
//     int a,b;
//     cout<<"Enter 1st and 2nd Number : "<<endl;
//     cin>>a>>b;
//     int sum =a+b;
//     cout<<"Sum of two number = "<<sum<<endl;
// }
// int main()
// {
// add();
// add();
// add();
// }
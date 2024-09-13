// Paramterize function

// This is the example of pass by value
#include <iostream>
using namespace std;

int sum(int a, int b) // Formal Parameters
{
    return a + b;
}
int main()
{
    cout << "Addition of two number :" << endl;
    cout << sum(22, 86); // Actual Paramaters
}

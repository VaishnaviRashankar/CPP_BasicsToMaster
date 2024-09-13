// Function Calling Itself
// 1] Repetiton
// 2] Infinite Loop
#include <iostream>
using namespace std;

void greet()
{
    cout << "Heyyy!";
    // greet();
}
int main()
{
    greet();
}
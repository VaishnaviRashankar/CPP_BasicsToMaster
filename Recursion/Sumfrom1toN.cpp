// Print sum from 1 to N(Paramaterized)
#include <iostream>
using namespace std;
int sum(int n) {
    if (n == 1) {
        return 1; // Base case: no sum for 0
    } else {
        return n + sum(n - 1); // Print the sum without returning
    }
}
int main()
{
    int n;
    cout << "Enter number :";
    cin >> n;
    cout<<sum(n);
}
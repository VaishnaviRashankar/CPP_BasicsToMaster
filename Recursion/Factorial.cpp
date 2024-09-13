//Make a function which calculate the factorial of n using recursion
#include<iostream>
using namespace std;
int fact
(int n) {
    if (n == 0 || n==1) {
        return 1; // Base case: no fact
        
    } else {
        return n * fact
        (n - 1); // Print the fact
        
    }
}
int main()
{
    int a;
cout<<"Enter Value :"<<" ";
cin>>a;
cout<<fact(a);

}
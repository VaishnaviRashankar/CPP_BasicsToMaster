// Return the total number of digits in a number without using any loop
// to_string ->int to String
 #include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int x=1234454;
    string s = to_string(x);
    
    cout<<s.length();
}
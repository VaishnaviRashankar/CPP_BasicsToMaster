#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s = "Doga the Hero";

    // Output the original string
    cout << "Original string: " << s << endl;

    // Reverse the string using reverse() function
    reverse(s.begin(), s.end());

    // Output the reversed string
    cout << "Reversed string: " << s << endl;

    return 0;
}
//    for(int i=s[i];i>=1;i--)
//    {
//    cout<<s[i]<<" ";

//    }

//Input a string of size n and update all the even position in the string to characters 'a' consider 0-based indexing.
#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int count = 0;

    for (int i = 0; i <= s.length(); i++) {
        if(i%2==0)
        {
           s[i]='a';
        }
        cout << s[i];
    }

    
    return 0;
}
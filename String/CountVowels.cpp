#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int count = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'e' || s[i] == 'i' || s[i] == 'u') {
            count++;
        }
    }

    cout << count;
    return 0;
}
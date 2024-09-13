// to_string ->int to String
 #include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int x=1234454;
    string s = to_string(x);
    s+="doga";
    cout<<s;
}
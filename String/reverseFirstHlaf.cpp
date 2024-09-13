// Input a string of even length and reverse the first half of the string
// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     string s = "Doga";
//     cout << s<<endl;
//   int n= s.length();
//   int i= 0;
//   int j= n/2-1;
//   while(i<j)
//   {
//     char temp= s[i];
//     s[i]=s[j];
//     s[j]=temp;
//     i++;
//     j--;
//   }
//   cout<<s<<endl;
// }

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s = "Doga the Hero";

    // Output the original string
    cout << "Original string: " << s << endl;

    // Reverse the string using reverse() function
    reverse(s.begin(), s.end()+2);

    // Output the reversed string
    cout << "Reversed string: " << s << endl;

    return 0;
}
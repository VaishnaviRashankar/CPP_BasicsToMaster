//Input a string of size n and update all the even position in the string to characters 'a' consider 0-based indexing.
#include <iostream>
using namespace std;

int main() {
    string s="Doga the Hero";
   
   

    cout<<s<<endl;
    s.push_back('!');
    cout<<s<<endl;
    s.push_back('A');
    cout<<s<<endl;
     cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    s.append("Hero!");
    cout<<s<<endl;
  //  clear()//IT make the string to empty string
  string x="oyy hoyy!";
  cout<<s<<" "<<x.length()<<endl;
  s.clear();
   cout<<s<<" "<<x.length()<<endl;


}
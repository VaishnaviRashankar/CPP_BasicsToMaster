#include<iostream>
using namespace std;
void usa()
{
    cout << "You are in USA ^_^" << endl;
    return;//function end //khatam Tata Bye 
    cout << "You are in USA ^_^" << endl;

}
void india()
{
    cout << "You are in India ^_^" << endl;
    usa();
}
int main() // main function = all control
{
    cout<<"You are in main "<<endl;
    usa(); // Function Call
    cout << "Hey!" << endl;
    india();
    return 0;
}



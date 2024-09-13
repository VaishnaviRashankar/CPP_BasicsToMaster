#include <iostream>
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
}
int main() // main function = all control
{
    usa(); // Function Call
    cout << "Hey!" << endl;
    india();
}


/*
main(): can not be called more than once
return; -> Keyword and function khatam
        kind of like break;

===========> Kaam ki Baate <==========
1] main() ek hi baar aata hai
2] Starts with main
3] unlimited functions

How functions work
ek ke andar doosra, doosre ke andar teesra
*/
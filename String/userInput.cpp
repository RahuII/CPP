#include <iostream>
using namespace std;

int main(){
    cout<<"Enter your full name: ";
    string fullName;
    cin>>fullName;
    cout<<fullName;

    // However, cin considers a space (whitespace, tabs, etc) 
    // as a terminating character, which means that it can only display a single word (even if you type many words):
}
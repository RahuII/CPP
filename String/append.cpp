#include<iostream>
using namespace std;
int main(){
    string firstName = "Rahul ";
    string lastName = "kumar";
    
    string fullName = firstName.append(lastName);

    cout<< fullName+"\n";
    cout<< fullName.length();
    cout<<"\n";

    string myString = "Hello";
    myString[0] = 'J';
    cout << myString;
    // Outputs Jello instead of Hello

}
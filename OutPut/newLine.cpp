#include<iostream>
using namespace std;

int main(){
    // To insert a new line, you can use the \n character:
    cout<<"To insert a new line,\nYou can use the '\\n' character:\n";

    // Tip: Two \n characters after each other will create a blank line:
    cout << "Hello World! \n\n";
    cout << "I am learning C++\n";

    // Another way to insert a new line, is with the endl manipulator:
    cout << "Hello World!" << endl;
    cout << "I am learning C++";

    return 0;
}
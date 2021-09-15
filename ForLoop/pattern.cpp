#include <iostream>
using namespace std;

int main(){
    int row, col;
    cout<<"Enter your number of row value: \n";
    cin>>row;
    cout<<"Enter your number of col value: \n";
    cin>>col;
    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
#include <iostream>
using namespace std;

int main(){
    int cols,rows;

    cout<<"Enter your rows value: \n";
    cin>>rows;
    cout<<"Enter your cols value: \n";
    cin>>cols;

    for(int i = 1; i<=rows; i++){
        for(int j = 1; j<=cols; j++){
            if(i==1 || i==rows || j==1 || j == cols){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
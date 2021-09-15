#include<iostream>
using namespace std;

int main(){
    int n;
    int cot = 1;
    cout<<"Enter your value of n: ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j<=i; j++){
            cout<<cot<<", ";
            cot++;
        }
        cout<<"\n";
    }
}
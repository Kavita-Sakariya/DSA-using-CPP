#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the Number of row: "<<endl;
    cin>>a;
    for (int i=0; i<a; i++){
        for(int j=0; j<a; j++)
        cout<<"*";
        cout<<endl;

    }
}
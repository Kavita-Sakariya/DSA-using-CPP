//If reversing n causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
#include <iostream>
using namespace std;

int main(){

    int n,ans=0,digit;
    cout<<"Enter a Number: ";
    cin>>n;

    for(int i=n; i!=0; i/=10){
        digit = i%10;
        ans = ans*10+ digit;
    }
    cout<<"Reverse Of Number is : "<<ans;
}
//a pair of numbers, each of which is the sum of the factors of the other (e.g. 220 and 284)

#include<iostream>
using namespace std;


int main(){
    int x, y,sumx=0,sumy=0;
    cout<<"Enter a First Number: ";
    cin >> x;
    cout<<"Enter a Second Number: ";
    cin >> y;

    for(int i=1; i<x; i++){
            if(x%i == 0){
            sumx += i;
        }
        // cout<<endl;
    }

    for(int j=1; j<x; j++){
            if(y%j == 0){
            sumy += j;
        }
        // cout<<endl;
    }

    if(sumx==y && sumy==x){
        cout<<"Given Numbers are Amicable Numbers";
    }
    else{
        cout<<"Given Numbers are not Amicable Numbers";
    }

    // return 0;
}
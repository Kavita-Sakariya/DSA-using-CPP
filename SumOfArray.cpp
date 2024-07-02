#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter a size of an Array: ";
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cout<<"Enter a "<<i<<" element: ";
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<"Sum Of an Array Elements : "<<sum<<endl;
}
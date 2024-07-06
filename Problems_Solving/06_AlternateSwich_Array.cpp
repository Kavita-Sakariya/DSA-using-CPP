#include <iostream>
using namespace std;

void SwichOfElement(int arr[],int n){
    // int start = 0;

    for(int i = 0; i < n-1 ; i+=2){
        swap(arr[i],arr[i+1]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
}

int main(){
    int size;
    cout<<"Enter a number of elements: ";
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cout<<"Element "<<i<<":";
        cin>>arr[i];
    }
    SwichOfElement(arr,size);
}
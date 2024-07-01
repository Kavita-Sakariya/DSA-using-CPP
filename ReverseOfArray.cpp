#include<iostream>
using namespace std;


void reverseofarray(int arr[],int n){
        int start=0;
        int end = n-1;
        while(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
    }
    cout<<"Reverse of an Arry is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

    int main(){
    int size;
    cout<<"Enter a size of an Array: ";
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cout<<"Enter a "<<i<<" element: ";
        cin>>arr[i];
         }
    reverseofarray(arr,size);
    }


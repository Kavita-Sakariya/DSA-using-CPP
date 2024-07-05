#include<iostream>
using namespace std;


int FindDuplicate(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans=ans^arr[i];
    }
    for(int i=1; i<size; i++){
        ans = ans ^ i;
    }
    return ans;
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

    int Duplicate= FindDuplicate(arr,size);
    cout<<"Duplicate: "<< Duplicate;
}
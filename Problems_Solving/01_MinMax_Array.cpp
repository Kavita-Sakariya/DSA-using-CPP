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

    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"max element: "<<max<<endl;

    int min = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"min element: "<<min;
}
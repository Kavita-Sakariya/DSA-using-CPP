#include<iostream>
using namespace std;

int firstOccurence(int arr[],int size, int key){
    int s=0;
    int e = size-1;
    int mid = s +(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid -1 ;
        }
        else if(arr[mid]>key){
            e = mid - 1 ;
        }
        else if(arr[mid]<key){
            s = mid + 1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}


int lastOccurence(int arr[],int size, int key){
    int s=0;
    int e = size-1;
    int mid = s +(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid + 1 ;
        }
        else if(arr[mid]>key){
            e = mid - 1 ;
        }
        else if(arr[mid]<key){
            s = mid + 1;
        }
        mid = s +(e-s)/2;
    }
    return ans;
}

int main(){
    int n = 11;
    int arr[]={1,2,3,4,5,5,5,5,5,6,7};
    int element = 5;

    cout<<"Left most occurence of Key is at index : "<<firstOccurence(arr,n,element)<<endl;
    cout<<"Right most occurence of key is at index : "<<lastOccurence(arr,n,element);
}
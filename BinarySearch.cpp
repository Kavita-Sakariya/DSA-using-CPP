#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){
    int s=0;
    int e=size-1;

    int mid=(s+e)/2;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key > arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid = (s+e)/2;
    }
    return -1;
}

int main(){
    int a[7]={2,4,8,12,14,27,30};
    int index = BinarySearch(a,7,27);
    cout<<"Index of your key is "<<index<<endl;

    return 0;
}
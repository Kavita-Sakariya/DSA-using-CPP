#include<iostream>
using namespace std;

  
    int Intersection(int arr1[], int arr2[],int m , int n){
    for (int i=0; i<m; i++){
        int key = arr1[i];
        for(int j=0; j<n; j++){
            if(key==arr2[j]){
                cout<<arr2[j]<< " ";
            }
            else{
                continue;
            }
        }
    }
}
 

 int main(){
    int size1 , size2 , arr1[100] , arr2[100];
    cout<<"Enter a size for Array 1 : ";
    cin >> size1;
    for(int i=0; i<size1; i++){
        cout<<"Element "<<i<<":";
        cin>>arr1[i];
    }
    cout<<"Enter a size for Array 2 : ";
    cin >> size2;

    for(int j=0; j<size2; j++){
        cout<<"Element "<<j<<":";
        cin>>arr2[j];
    }
    
    Intersection(arr1, arr2 , size1 , size2);

 }

 

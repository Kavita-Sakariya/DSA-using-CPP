#include<iostream>
using namespace std;

bool search(int arr[],int size, int key) 
{
    for(int i = 0; i < size; i++){
        if (arr[i] == key){
                return 1;
        }
    }
    return 0;
    
}

int main()
{
    int arr[5]={8,27,14,21,30};
    
    cout<<"Enter the element to search for : "; 
    int key;
    cin>>key;

    bool found = search(arr,5,key);
    if(found){
        cout<<key<< " Key is Present in array "<<endl;
    }
    else{
        cout<<key<< " Key is not present in array "<<endl;
    }


}
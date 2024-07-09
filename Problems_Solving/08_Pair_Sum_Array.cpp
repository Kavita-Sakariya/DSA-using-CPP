#include<iostream>
using namespace std;

void pairsum(int arr[], int size, int s) {
    bool found = false;  // Flag to check if any pair is found
    for(int i = 0; i < size; i++) {
        for(int j = i + 1; j < size; j++) {
            if(arr[j] + arr[i] == s) {
                found = true;  // Set flag to true if a pair is found
                if(arr[i] > arr[j]) {
                    cout << arr[j] << "&" << arr[i] << " ";
                } else {
                    cout << arr[i] << "&" << arr[j] << " ";
                }
            }
        }
    }
    if (!found) {
        cout << "No pair found with the given sum.";
    }
}

int main() {
    int size = 8;
    int arr[] = {1, 7, 4, 3, 2, 6, 5, 9};

    int s;
    cout << "Enter a sum of the array pair: ";
    cin >> s;

    pairsum(arr, size, s);

    return 0;
}

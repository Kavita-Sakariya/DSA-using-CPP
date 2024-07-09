#include <iostream>
using namespace std;

void tripletSum(int arr[], int size, int Sum) {
    bool found = false;

    for (int i = 0; i < size - 2; i++) {
        for (int j = i + 1; j < size - 1; j++) {
            for (int k = j + 1; k < size; k++) {
                if (arr[i] + arr[j] + arr[k] == Sum) {
                    found = true;
                    cout << arr[i] << "&" << arr[j] << "&" << arr[k] << " ";
                }
            }
        }
    }

    if (!found) {
        cout << "No triplet found with the given sum." << endl;
    }
}

int main() {
    int size = 8;
    int arr[] = {1, 7, 4, 3, 2, 6, 5, 9};
    int Sum;

    cout << "Enter a sum for triplets: ";
    cin >> Sum;

    tripletSum(arr, size, Sum);

    return 0;
}

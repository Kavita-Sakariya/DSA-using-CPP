#include <iostream>
using namespace std;

int peakElement(int arr[], int size) {
    int s = 0;
    int e = size - 1;

    while (s < e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }

    // After the while loop, s equals e, which is the peak element index.
    return e; // or return e; (both are equivalent in this case)
}

int main() {
    int size = 8;
    int arr[8] = {1, 3, 4, 5, 7,8, 6, 5};

    int peakIndex = peakElement(arr, size);
    cout << "Peak element index: " << peakIndex << endl;
    cout << "Peak element value: " << arr[peakIndex] << endl;

    return 0;
}

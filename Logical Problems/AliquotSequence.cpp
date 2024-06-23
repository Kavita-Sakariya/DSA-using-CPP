#include <iostream>
using namespace std;

// Function to calculate the sum of proper divisors of n
int sum_of_divisors(int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

// Function to print the aliquot sequence starting from n
void aliquot_sequence(int n) {
    cout << n << " ";
    int next = sum_of_divisors(n);
    while (next != n) {
        cout << next << " ";
        n = next;
        next = sum_of_divisors(n);
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    aliquot_sequence(num);
    return 0;
}

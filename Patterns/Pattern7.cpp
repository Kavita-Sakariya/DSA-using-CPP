#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    for (int i = 0; i <= n; i++) {
        char current_char = 'A' + i ; 
        for (int j = 0; j <= i; j++) {
            cout<<static_cast<char>(current_char - j) << " ";
        }
        cout<<endl;
    }

    return 0;
}

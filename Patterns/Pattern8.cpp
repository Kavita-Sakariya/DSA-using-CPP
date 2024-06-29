#include <iostream>

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    for (int i = 0; i <= n; i++) {
        for (int j = i; j >= 0; j--) {
            if (j % 2 == 0) {
                std::cout << "0 ";
            } else {
                std::cout << static_cast<char>('A' + (j / 2)) << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

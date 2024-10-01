#include <iostream>
int main() {
    const int SIZE = 20;
    int numbers[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        numbers[i] = std::rand() % 5 + 5;
    }
    for (int i = 0; i < SIZE; ++i) {
        std::cout << numbers[i] << " ";
        if ((i + 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }
        return 0;
    }
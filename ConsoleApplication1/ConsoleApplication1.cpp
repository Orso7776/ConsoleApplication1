#include <iostream>

int main() {
    using namespace std;

    int number;
    int sum = 0;

    cout << "Enter numbers:" << endl;

    while (true) {
        cin >> number;

        if (number == 0) {
            break;
        }

        sum += number;
    }

    cout << "Sum: " << sum << endl;

    return 0;
}
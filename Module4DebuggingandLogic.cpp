#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    // Nested if to find the largest number
    if (n1 >= n2) {
        if (n1 >= n3) {
            cout << "Largest number: " << n1 << endl;
        } else {
            cout << "Largest number: " << n3 << endl;
        }
    } else { // n2 > n1
        if (n2 >= n3) {
            cout << "Largest number: " << n2 << endl;
        } else {
            cout << "Largest number: " << n3 << endl;
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n = 7;    // Exponent
    int x = 2;    // Base
    long int p = 1;  // Result starts at 1 (as anything raised to power 0 is 1)

    while (n > 0) {
        if (n % 2 == 1) {
            p = p * x;  // If the current exponent bit is 1, multiply the result by the base
        }
        x = x * x;  // Square the base at each step
        n = n / 2;  // Move to the next bit (integer division by 2)
    }

    cout << p;
    return 0;
}

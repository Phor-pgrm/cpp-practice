#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    while (n >= 10) {  // keep looping until it's a single digit
        int sum = 0;
        while (n > 0) {
            sum += n % 10;  // add last digit
            n /= 10;        // remove last digit
        }
        n = sum;  // update n with the sum of its digits
    }

    cout << "Final single digit: " << n << endl;
    return 0;
}

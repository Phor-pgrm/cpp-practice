#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime factors: ";

    while (n % 2 == 0) {
        cout << 2 << " ";
        n = n / 2;
    }

    for (int i = 3; i <= n; i += 2) {
        while (n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
    }

    cout << endl;
    return 0;
}

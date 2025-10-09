#include <iostream>
using namespace std;

int main() {
int n, j = 0, k = 0, z = 0, x = 0;
    cin >> n;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            if (n % i == 0)
            cout << i << " + ";
            z += i;
            else
            cout << " = " << z << endl;
        }
    if (z == n)
            cout << n << " is a perfect number!" << endl;
            else
            cout << n << " is not a perfect number" << endl;

    return 0;
}
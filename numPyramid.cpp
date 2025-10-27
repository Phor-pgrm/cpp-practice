#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    // number of rows (line 12 to 23 prints the content)
    for (int i = 1; i <= n; i++) {
        // print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        // print decreasing numbers
        for (int k = i; k > 1; k--) {
            cout << k << " ";
        }
        // print increasing numbers
        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }
        cout << endl; // move to next row
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
int x, y, tf;
cout << "Input: ";
cin >> x;
tf = x % 2;
if (tf == 0) {
    cout << "Even.";
} else {
    cout << "Odd.";
}

    return 0;
}
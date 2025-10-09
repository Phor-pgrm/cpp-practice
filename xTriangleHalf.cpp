#include <iostream>
using namespace std;

int main() {
int x;
cin >> x;
for (int i = 1; i <= x; i++) {
    for (int n = 1; n <= i; n++) {
        cout << "x";
    }
    cout << endl;
}


    return 0;
}
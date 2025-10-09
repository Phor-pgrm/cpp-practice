#include <iostream>
using namespace std;

int main() {
int n, j = 0, z = 0, f;
    cin >> n;
    f = n;
    while (n > 0) {
        j = n % 10;

        int k = 1;
        for (int i = 1; i <= j; i++) {
        k *= i;
        }
        z += k;
        n /= 10;
        cout << k;
        if (n > 0)
        cout << " + ";
        else 
        cout << " = " << z << endl;
    }
    if (f == z){
    cout << f << " is a strong number!";
    } else
    cout << f << " is not a strong number";

    return 0;
}
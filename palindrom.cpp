#include <iostream>
using namespace std;

int main() {
    int n, k = 0, j = 0;
    cin >> n;
    int z = n;
    while (z > 0){
    j = z % 10;
    k = k * 10 + j;
    z /= 10;
    }
    if (k == n)
    cout << "Its a palindrome";
    else 
    cout << "Its not a palindrome";
    return 0;
}
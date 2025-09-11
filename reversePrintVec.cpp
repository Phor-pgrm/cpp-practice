#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x, decision;
    int n = 0;
    char all;
    vector<int> var;

while(true) {
    cout << "1. You have a specific number of numbers to use.\n2. You are not sure how many numbers to use.\n";
    cin >> decision;
    switch (decision) {

        case 1:
        cout << "How many numbers do you have in mind?\n";
        cin >> n;
        cout << "Insert " << n << " numbers.\n";
        for (int i = 0; i <= n; i++) {
            cin >> i;
            var.push_back(i);
        } break;

        case 2:
        cout << "Insert number";
        cin >> x;
        var.push_back(x);
        cout << "Do you want to add another? (y/n)\n";
        cin >> all;
        while (all == 'Y' && all == 'y') {
        cin >> x;
        var.push_back(x);
        cout << "Do you want to add another? (y/n)\n";
        cin >> all;
        } break;

        default:
        cout << "Invalid choice.\n";
        continue;
        } break;
    }  

    for (int i = var.size() - 1; i >= 0; i--) {
        cout << var[i] << " ";
    }


    return 0;
}
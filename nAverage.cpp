#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x, n, choice, sum, average;
    char more;
    vector<int> ave;

    cout << "1. If you have a specific amount of numbers in mind.\n2. If you dont.\n";
    cin >> choice;
    while (true) {
        switch (choice) {
            case 1:
            cout << "How many numbers do you want to input?\n";
            cin >> n;
            cout << "Input " << n << " numbers!\n";
            for (int i = 0; i < n; i++){
            cin >> x;
            ave.push_back(x);
            } break;
            
            case 2:
            cout << "Input number.\n";
            cin >> x;
            ave.push_back(x);
            cout << "Do you wish to add more? (y/n)";
            cin >> more;
            while (more == 'y' && more == 'Y') {
                cin >> x;
                ave.push_back(x);
                cout << "Do you wish to add more? (y/n)";
            } break;
            
            default:
            continue;
        } break;
    }

    sum = 0;
    for (int i = 0; i < ave.size(); i++) {
        sum += ave[i];
    }
    average = sum/ave.size();

    cout << "The average of all your numbers is " << average << "!";

    return 0;
}
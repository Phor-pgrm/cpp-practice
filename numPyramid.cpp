#include <iostream>
#include <algorithm>
#include <functional>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    int x, y;
    char cont = 'y';
    vector<int> store;

    cout << "How many numbers would you like to give? ";
    cin >> y;

    cout << "Give your numbers!\n";

    while (store.size() != y){    
    cin >> x;
    store.push_back(x);
    }

    cout << "Do you wish to add more? (y/n)\n";
    cin >> cont;

    while (cont != 'n' && cont != 'n') {
    cin >> x;
    store.push_back(x);
    cout << "Do you wish to add more? (y/n)\n";
    cin >> cont;
    }

    cout << "Great! Your numbers are [";

    for (int i = 0; i < store.size() ; i++) {
        cout << store[i];
        if (i < store.size() - 1)
        cout << ", ";
    }
    cout << "]\n";

    cout << "Now organizing!\n";
    this_thread::sleep_for(chrono::seconds(2));
    sort(store.begin(), store.end(), greater<int>());

    cout << "Your numbers are now organized from highest to lowest!\n";
    cout << "[";

    for (int i = 0; i < store.size(); i++) {
        cout << store[i];
        if (i < store.size() - 1)
        cout << ", ";
    }

    cout << "]";

    return 0;
}
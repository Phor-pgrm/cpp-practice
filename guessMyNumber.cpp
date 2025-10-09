#include <iostream>
using namespace std;

int main(){
    int guess, hidden;

    cout << "The hidden number is " << endl;
    cin >> hidden;
    cout << "Guess my number!\n";
    cin >> guess;
    while (guess != hidden) {
        if (guess < hidden) {
        cout << "Try Higher!\n";
        cin >> guess;
        } else {
         cout << "Try Lower!\n";
        cin >> guess;
        }
    }
    cout << "correct!";
    return 0;
}
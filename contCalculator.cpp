#include <iostream>
#include <vector>
using namespace std;

char returnBack() {
    return 32;
}



int main () {
int x, sum, diff, prod, quo;
char operation;
char end = 'y';
vector<int> num;

cout << "What numbers do you wish to use?\n";
cin >> x;
num.push_back(x);
cout << "and\n";
cin >> x;
cout << "Add another number? (Y/N)\n";
cin >> end;
num.push_back(x);
while (end != 'n' && end != 'N') {
cout << "State a new number\n";
cin >> x;
num.push_back(x);
cout << "Add another number? (Y/N)\n";
cin >> end;
}
while (true) {
cout << "What do you wish to be the operation?\n" << "+, -, *, or /?\n";
cin >> operation;
switch (operation) {
    case '+':
    sum = 0;
    for (int i = 0; i < num.size(); i++) {
        sum += num[i];
    } cout << "The sum of your numbers are " << sum << "!";
    break;

    case '-':
    diff = num[0];
    for (int i = 1; i < num.size(); i++) {
        diff -= num[i];
    } cout << "The difference of your numbers are " << diff << "!";
    break;

    case '*':
    case 'x':
    prod = 1;
    for (int i = 0; i < num.size(); i++) {
        prod *= num[i];
    } cout << "The product of your numbers are " << prod << "!";
    break;
    
    case '/':
    quo = num[0];
    for (int i = 1; i < num.size(); i++) {
        quo /= num[i];
    } cout << "The quotient of your numbers are " << quo << "!";
    break;

    default:
    continue;
        } break;
    }
    return 0;
}
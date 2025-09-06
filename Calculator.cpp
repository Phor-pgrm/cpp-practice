#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "What numbers do you wish to use? ";
    cin >> x >> y;
    cout << "Okay. You want to use " << x << " and " << y << ".\n";
    cout << "Now, what do you want to do with them?\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "The sum is " << (x + y) << ".\n";
        break;
    case 2:
        cout << "The difference is " << (x - y) << ".\n";
        break;
    case 3:
        cout << "The product is " << (x * y) << ".\n";
        break;
    case 4:
        if (y != 0 && x % y == 0)
            cout << "The quotient is " << (x / y) << ".\n";
        else if (x % y != 0)
            cout << "The quotient is " << (x / y) << " and a remainder of " << (x % y) << ".\n";
        else
            cout << "Error: Division by zero is undefined.\n";
        break;
    default:
        cout << "Invalid choice.\n";
    }

    return 0;
}
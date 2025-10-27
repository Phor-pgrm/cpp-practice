#include <iostream>
#include <vector>

void decToBin(int x);
void decToOctal(int x);
void decToHex(int x);

int main () {
int x, choice;
std::cout << "What would you like to convert from decimal values?\n1. Binary\n2. Octal\n3. Hexadecimal\n4. All\n5. Exit\n";
std::cout << "Choice: ";
std::cin >> choice;
while (choice != false) {
switch (choice) {
    case 1:
    std::cout << "What value would you like to use to convert? ";
    std::cin >> x;
    decToBin(x);
    std::cout << "Choice: ";
    std::cin >> choice;
    break;

    case 2:
    std::cout << "What value would you like to use to convert? ";
    std::cin >> x;
    decToOctal(x);
    std::cout << "Choice: ";
    std::cin >> choice;
    break;
    
    case 3:
    std::cout << "What value would you like to use to convert? ";
    std::cin >> x;
    decToHex(x);
    std::cout << "Choice: ";
    std::cin >> choice;
    break;

    case 4:
    std::cout << "What value would you like to use to convert? ";
    std::cin >> x;
    decToBin(x);
    decToOctal(x);
    decToHex(x);
    std::cout << "Choice: ";
    std::cin >> choice;
    break;

    case 5:
    std::cout << "Program Terminated!";
    return 0;
    break;

    default:
    std::cout << "Invalid Choice. Try again\n";
    std::cout << "Choice: ";
    std::cin >> choice;
    }
}

    return 0;
}

void decToBin(int x) {
std::vector<int> conv;
std::vector<int> rem;
std::cout << "Decimal to Binary!" << std::endl;
        int convert = 0, remainder = 0;
        while (x >= 1) {
        int y = x;

        int remainder = y %= 2;
        rem.push_back(remainder);

        int convert = x /= 2;
        conv.push_back(convert);
    }
    conv.pop_back();
    for (auto i = rem.rbegin(); i != rem.rend(); i++)
    std::cout << *i;

    std::cout << std::endl;

    std::cout << "----------------------" << std::endl;

    for (int i = 0; i <= conv.size(); i++)
    std::cout << conv[i] << " ";

    std::cout << std::endl;
}

void decToOctal(int x) {
std::vector<int> conv;
std::vector<int> rem;
std::cout << "Decimal to Octal!" << std::endl;
        int convert = 0, remainder = 0;
        while (x >= 1) {
        int y = x;

        int remainder = y %= 8;
        rem.push_back(remainder);

        int convert = x /= 8;
        conv.push_back(convert);
    }
    conv.pop_back();
    for (auto i = rem.rbegin(); i != rem.rend(); i++)
    std::cout << *i;

    std::cout << std::endl;

    std::cout << "----------------------" << std::endl;

    for (int i = 0; i <= conv.size(); i++)
    std::cout << conv[i] << " ";

    std::cout << std::endl;
}

void decToHex(int x) {
std::vector<int> conv;
std::vector<int> rem;
std::cout << "Decimal to Hexadecimal!" << std::endl;
        int convert = 0, remainder = 0;
        while (x >= 1) {
        int y = x;

        int remainder = y %= 16;
        rem.push_back(remainder);

        int convert = x /= 16;
        conv.push_back(convert);
    }
    conv.pop_back();
    for (auto i = rem.rbegin(); i != rem.rend(); i++)
    std::cout << *i;

    std::cout << std::endl;

    std::cout << "----------------------" << std::endl;

    for (int i = 0; i <= conv.size(); i++)
    std::cout << conv[i] << " ";

    std::cout << std::endl;
}

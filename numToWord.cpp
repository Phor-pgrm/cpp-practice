#include <iostream>
#include <string>

void lessThanTen (int);
void teensPos (int);
void tensPos (int);
void hundredsPos (int);

int main() {
int digit;

    std::cout << "Number to word\n";
    std::cout << "Number: ";
    std::cin >> digit;

    if (digit <= 10) {
        lessThanTen(digit);
    } else if (digit < 20) {
        teensPos(digit);  
    } else if (digit < 100) {
        tensPos(digit);
    } else if (digit < 1000) {
        hundredsPos(digit);
    }


    return 0;
}

void lessThanTen (int x) {
std::string word[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten"};
    if (x == 0) {
        std::cout << "Zero";
    } else {
    std::cout << word[x];
    }

}
void teensPos (int x) {
std::string word[] = {"Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    x -= 11;
    std::cout << word[x];

}
void tensPos (int x) {
std::string word[] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    int ones = x % 10;
    int tens = (x / 10) - 2; 
        std::cout << word[tens];
        std::cout << " ";
        if (ones > 0){
        lessThanTen(ones);
        }
}

void hundredsPos (int x) {
int hundreds = x / 100; 
int tens = x % 100;
int teens = x % 20;
int less = x % 10;
lessThanTen(hundreds);
std::cout << " hundred ";
if (x % 100 < 10)
lessThanTen(less);
if (x % 100 < 20)
teensPos(teens);
if (x % 100 < 100)
tensPos(tens);
}
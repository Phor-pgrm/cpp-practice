#include <iostream>

int main() {
int curr, seq, next;
int prev = 0;
int sum = 0;
    std::cout << "Welcome to the Fibonacci Sequencer!" << std::endl;
    std::cout << "What digit would you like to use and for how many sequence?" << std::endl;
    std::cout << "Digit: ";
    std::cin >> curr;
    std::cout << "Sequence: ";
    std::cin >> seq;

    for (int i = 0; i <= seq; i++) {
        next = prev + curr;
        prev = curr;
        curr = next;
        sum += next;

        std::cout << next << std::endl;
    }
    std::cout << "The sum of the sequence is " << sum;

    return 0;
}
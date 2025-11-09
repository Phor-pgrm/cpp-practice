#include <iostream>

int factorial(int);

int main() {
int x = 6;
    std::cout << factorial(x);
    return 0;
}

int factorial (int x){
    //Must return 1 to end loop
    if (x <= 1) return 1;
    return x * factorial(x-1);
}
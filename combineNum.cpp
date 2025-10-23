#include <iostream>
#include <vector>

int combine(int a, int b);

int main() {
int x, y;

    std::cin >> x >> y;
    std::cout << combine(x, y);

    return 0;
}

int combine(int a, int b) {
    int times = 1;
    while (times <= b)
    times *= 10;
    
    return a*times + b;
} 
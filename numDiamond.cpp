#include <iostream>

int main() {
int x;
    std::cout << "What is the size of the diamond? ";
    std::cin >> x;
    
    for (int i = 1; i <= x; i++){
        for (int j = i; j <= x-1; j++){
            std::cout << "  ";
        }

        for (int k = i; k > 1; k--){
            std::cout << k << " ";
        }

        
        for (int k = 1; k <= i; k++){
            std::cout << k << " ";
        }

        std::cout << '\n';
    }
    for (int i = x - 1; i >= 1; i--){
        for (int j = i; j < x; j++){
            std::cout << "  ";
        }

        for (int k = i; k > 1; k--){
            std::cout << k << " ";
        }

        for (int k = 1; k <= i; k++){
            std::cout << k << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
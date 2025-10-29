#include <iostream>

int main() {
int x;

    std::cout << "How big is the pyramid? ";
    std::cin >> x;

    //the stack
    for(int i = 1; i < x; i++){
        
        //left spaces
        for (int j = i; j < x; j++){
            std::cout << " ";
        }

        //left side num
        for (int j = x; j > 1; j--){
            if (j == i){
            std::cout << j;
            }
        }
        //middle space
        for (int j = 1; j < i - 1; j++) {
            std::cout << " ";
        }

        //right side num
        for (int j = 1; j <= x; j++) {
            if (j == i) {
                std::cout << j;
            } else {
                std::cout << " ";
            }
        }
        
        std::cout << '\n';
    }

    //left bottom
    for (int i = x; i > 1; i--){
        std::cout << i;
    }
    
    //right bottom
    for (int i = 1; i <= x; i++){
        std::cout << i;
    }

    return 0;
}
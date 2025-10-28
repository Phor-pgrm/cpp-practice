#include <iostream>

int main(){
int x;
    std::cout << "How big is the pyramid: ";
    std::cin >> x;

    for (int i = x; i >= 1; i--){
        for(int j = i; j <= x - 1; j++){
            std::cout << "  ";
        }
        //prints one side 
        for (int k = 1; k < i; k++){
            std::cout << k << " ";
        }
        for (int k = i; k >= 1; k--){
            std::cout << k << " ";
        }
        
        std::cout << '\n';
    }
    return 0;
}
#include <iostream>
#include <vector>

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
    for (auto i = rem.rbegin(); i != rem.rend(); i++)
    std::cout << *i << " " << std::endl;

    std::cout << "----------------------" << std::endl;

    for (int i = 0; i <= conv.size(); i++)
    std::cout << conv[i] << " ";

}

int main () {
int x;
std::cin >> x;
decToBin(x);

    return 0;
}
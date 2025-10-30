#include <iostream>
#include <vector>

int main() {
std::vector<int> grades;
int x = 5;
double sum = 0.0, ave = 0.0;

    std::cout << "Input 5 numbers: ";
    
    for (int i = 1; i <= x; i++){
        int y;
        std::cin >> y;
        grades.push_back(y);
    }

    for (int i = 0; i < grades.size(); i++) {
        sum += grades[i];
    }
    std::cout << "The sum is " << sum << '\n';

    ave = sum / x;
    std::cout << "The average is " << ave << '\n';

    for (int i = 0; i < grades.size(); i++) {
        for (int j = 0; j < grades.size(); j++) {
            if (grades[j] < grades[i]) {
                int temp = grades[j];
                grades[j] = grades[i];
                grades[i] = temp;
            }
        }
    }

    std::cout << "Sorted from largest to smallest: [";

    for (int i = 0; i < grades.size(); i++) {
        std::cout << grades[i];
        if (i < grades.size() - 1){
            std::cout << ", ";
        }
        else if (i == grades.size() - 1){
        std::cout << "]";
        }
    }

    return 0;
}
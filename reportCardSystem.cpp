#include <iostream>
#include <vector>

int main() {
int subjects, grade, sum = 0, highest, lowest;
std::vector<int> reportCard;
double average = 0.0;

    std::cout << "Number of subjects: ";
    std::cin >> subjects;
    std::cout << "Grades: ";

    do {
        std::cin >> grade;
        reportCard.push_back(grade);
    } while (reportCard.size() != subjects);

    for (int i = 0; i < reportCard.size(); i++) {
        sum += reportCard[i];
    }

    for (int i = 0; i < reportCard.size(); i++) {
        for (int j = 0; j < reportCard.size(); j++){
            if (reportCard[j] > reportCard[i]) {
                int temp = reportCard[i];
                reportCard[i] = reportCard[j];
                reportCard[j] = temp;
            }
        }
    }
    highest = reportCard.back();
    lowest = reportCard.front();

    double doubleSum = static_cast<double>(sum);
    average = doubleSum / subjects;

    std::cout << "Average: " << average << '\n';
    std::cout << "Highest: " << highest << '\n';
    std::cout << "Lowest: " << lowest << '\n';

    if (average >= 75) {
        std::cout << "You passed!";
    } else {
        std::cout << "You failed.";
    }

    return 0;
}
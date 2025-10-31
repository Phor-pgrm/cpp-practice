#include <iostream>
#include <vector>

int main() {
int days, totalAllowance = 0.0;
double totalSpent = 0.0, dailySpent = 0.0, remainingMoney = 0.0, spent = 0.0;
std::vector<double> expenses;
char repeat;
int allowance;

    std::cout << "Welcome to the budget tracker!\nTo track your budget please input the following information!\n";
    std::cout << "Weekly allowance: ";
    std::cin >> allowance;
    totalAllowance = allowance;
    std::cout << "For how long do you wish to keep track: ";
    std::cin >> days;

    for (int i = 1; i <= days; i++) {
        dailySpent = 0.0;
        
        if (i % 8 == 0) {
            totalAllowance += allowance;
            std::cout << "Today is your allowance day! You have earned another " << allowance << " as allowance!" << "\nTotal is now: " << totalAllowance << '\n';
        }

        std::cout << "----------------------------------------------------------------------------\n";
        std::cout << "This is day " << i << " of your budgeting!\n";
        std::cout << "State your expenses made for the day, and confirm if done.\n";
        std::cout << "Expenses: ";
        
        do {
            std::cin >> spent;
            if (spent != 0)
                expenses.push_back(spent);
        } while (spent != 0);

        
        for (int j = 0; j <= expenses.size() - 1; j++) {
            dailySpent += expenses[j];
        }


        if (dailySpent < allowance / 2) {
            std::cout << "You saved well! You spent less than half of your allowance!\n";
        } else if (dailySpent <= allowance) {
            std::cout << "You're on budget. Keep it up!\n";
        } else {
            std::cout << "You overspent!\n";
        }

        expenses.clear();

        std::cout << "You spent a total of " << dailySpent << " within this day.\n";
        totalSpent += dailySpent;
        totalAllowance -= dailySpent;

        std::cout << "SUMMARY:\n";
        std::cout << "You have spent " << totalSpent << " over the course of " << i << " days.\n";
        std::cout << "You have " << totalAllowance << " remaining.\n";
    }

    return 0;
}
#include <iostream>
#include <string>

long double balance = 10000.0;

void menu(int);
void checkBalance();
void deposit();
void withdraw();
void exit();

int main() {
int choice;
std::string user = "Zoe";

    std::cout << "Welcome, " << user;
    std::cout << "\nChoose a function:\n1. Check balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ";
    std::cin >> choice;
    
    menu(choice);
    
    return 0;
}

void menu(int x) {
int choice;

switch (x) {
    case 1:
        checkBalance();
        break;
    
    case 2:
        deposit();
        break;

    case 3:
        withdraw();
        break;

    case 4:
        exit();
        break;

    default:
        std::cout << "\nChoose a function:\n1. Check balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ";
        std::cin >> choice;
        menu(choice);
    }
}

void checkBalance() {
int choice;
char cont;
long double* bal = &balance;

    std::cout << "Current balance: " << *bal;
    
    std::cout << "\nContinue? (Y/N) ";
    std::cin >> cont;
    
    if (cont == 'Y' || cont == 'y'){
    std::cout << "\nChoose a function:\n1. Check balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ";
    std::cin >> choice;
    menu(choice);
    } 
}

void deposit() {
double depos;
long double* bal = &balance;
int choice;
char cont;

    std::cout << "Deposit amount: ";
    std::cin >> depos;
    *bal += depos;
    std::cout << "New balance: " << *bal;
    
    std::cout << "\nContinue? (Y/N) ";
    std::cin >> cont;

    if (cont == 'Y' || cont == 'y'){
    std::cout << "\nChoose a function:\n1. Check balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ";
    std::cin >> choice;
    menu(choice);
    } 
}

void withdraw() {
double with;
long double* bal = &balance;
int choice;
char cont;

    std::cout << "Withdraw amount: ";
    std::cin >> with;
    if (*bal < with) {
        std::cout << "Invalid amount.\nTransaction cancelled.";
    } else {
    *bal -= with;
    std::cout << "New balance: " << *bal;
    }

    std::cout << "\nContinue? (Y/N) ";
    std::cin >> cont;

    if (cont == 'Y' || cont == 'y'){
    std::cout << "\nChoose a function:\n1. Check balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ";
    std::cin >> choice;
    menu(choice);
    } 
}

void exit() {
    std::cout << "Thank you for your patronage.";
}
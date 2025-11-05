#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> itemList;
std::vector<int> stockCount;
std::vector<std::string> itemName;

void menu(int choice);
void shop();
void search();
void edit(int update);
void editItem();
void editStock();
void backToMenu();

int main() {
int items, stock, choice;
std::string name, search, lowerCase, combine = "";


    std::cout << "Number of items: ";
    std::cin >> items;

    for (int i = 1; i <= items; i++) {
        std::cout << "Item name: ";
        std::getline(std::cin >> std::ws, name);
            for (int j = 0; j < name.size(); j++) {
                lowerCase = std::tolower(name[j]);
                combine += lowerCase;
            }   itemName.push_back(combine);
        itemList.push_back(name);
        std::cout << "Stock count: ";
        std::cin >> stock;
        stockCount.push_back(stock);
    }

    std::cout << "MENU\n1. Show all items\n2. Search item\n3. Update stock\n4. Exit\n";
    std::cout << "Choice: ";
    std::cin >> choice;
    menu(choice);
    

    return 0;
}

void menu(int choice) {
int update;
char back;

    switch (choice) {
        case 1:
            shop();
            backToMenu();
            break;      
  
        case 2:
            search();
            backToMenu();
            break;

        case 3:
            std::cout << "Update stock:\n1. Add item\n2. Add/Remove stock\n";
            std::cout << "choice: ";
            std::cin >> update;
            edit(update);
            backToMenu();
            break;

        case 4:
            std::cout << "Program Terminated.";
            break;

        default:
            std::cout << "Invalid choice. Try again.\n";
            std::cout << "Update stock:\n1. Add item\n2. Add/Remove stock\n";
            std::cout << "choice: ";
            std::cin >> choice;
            menu(choice);
    }
}

void shop() {
std::cout << "---------------------SHOP----------------------\n";
            for (int i = 0; i <= stockCount.size() - 1; i++) {
            std::cout << itemList[i] << ": " << stockCount[i] << '\n';
            }
}

void search() {
std::string search;


    std::cout << "Search: ";
    std::getline(std::cin >> std::ws, search);
    for (int i = 0; i < itemList.size(); i++) {
        if (search.find(itemName[i]) != std::string::npos || search.find(itemList[i]) != std::string::npos) {
            std::cout << itemList[i] << ": " << stockCount[i] << '\n'; //Detects words with similar format (Pen, Pencil) if user searched Pencil, it will detect Pen.
            break;
        } else {
            std::cout << "ERROR 404/Item not found" << '\n'; //Will not detect newly added items.
            break;
        }
    }
}

void edit(int update) {
int updateChoice;
    switch (update) {
        case 1:
            editItem();
            break;

        case 2:
            editStock();
            break;

        default:
            std::cout << "Invalid choice. Try again.\n";
            std::cout << "Update stock:\n1. Add item\n2. Add/Remove stock\n";
            std::cout << "choice: ";
            std::cin >> updateChoice;
            edit(updateChoice);
        }
}

void editItem() {
int stock;
std::string name, lowerCase, combine = "";


    std::cout << "Item name: ";
        std::getline(std::cin >> std::ws, name);
            for (int i = 0; i < name.size(); i++){
                lowerCase = std::tolower(name[i]);
                combine += lowerCase;
            }   itemName.push_back(combine);
        itemList.push_back(name);
        std::cout << "Stock count: ";
        std::cin >> stock;
        stockCount.push_back(stock);
}

void editStock() {
int stock;
std::string search;


    std::cout << "Search: ";
        std::getline(std::cin >> std::ws, search);
            for (int i = 0; i <= itemList.size(); i++){
                if (search.find(itemList[i]) != std::string::npos || search.find(itemName[i]) != std::string::npos) {
                stockCount.erase(stockCount.begin() + i);
                std::cout << "Stock count: ";
                std::cin >> stock;
                stockCount.insert(stockCount.begin() + i, stock);
                } else {
                    std::cout << "ERROR 404/Item not found" << '\n';
                    break;
            }
        }
        for (int i = 0; i < itemList.size(); i++) {
            if (stockCount[i] == 0) {
                stockCount.erase(stockCount.begin() + i);
                itemList.erase(itemList.begin() + i);
                itemName.erase(itemName.begin() + i);
            }
        }
}

void backToMenu() {
char back;
int choice;
    std::cout << "Back to menu? ";
        std::cin >> back;
        if (back == 'y' || back == 'Y'){
            std::cout << "MENU\n1. Show all items\n2. Search item\n3. Update stock\n4. Exit\n";
            std::cout << "Choice: ";
            std::cin >> choice;
            menu(choice);
        }
}
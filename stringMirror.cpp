#include <iostream>
#include <string>

int main() {
std::string word, rev = "";
int vowels = 0;
    
    std::cout << "Input a word: ";
    std::getline(std::cin, word);

    std::cout << "Reversed: ";
    for (int i = word.length() - 1; i >= 0; i--) {
        std::cout << word[i];
        rev += word[i];
    }

    //std::string::npos means "not found"; != npos means not "not found" or found
    std::string vowelsList = "aeiouAEIOU";
    for (int i = 0; i < word.length(); i++) {
        if (vowelsList.find(word[i]) != std::string::npos){
        vowels++;
        }
    }
    std::cout << "\nVowels: " << vowels;

    std::cout << "\nPalindrome: ";
    if (word == rev) {
        std::cout << "Yes"; 
    } else {
        std::cout << "No";
    }

    return 0;
}
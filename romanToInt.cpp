#include <iostream>
#include <string>

int romanToInt(std::string);

int main() {
    
    std::cout << romanToInt("MCMXCIV"); 
}

int romanToInt(std::string s) {
int number = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'M')
        number += 1000;
        
        else if (s[i] == 'D')
        number += 500;
        
        else if (s[i] == 'C') {
            if (i + 1 < s.length() && s[i + 1] == 'D') {
                number += 400;
                i++;
            }
            else if (i + 1 < s.length() && s[i + 1] == 'M') {
                number += 900;
                i++;
            } else {
                number += 100;
            }
        }
        
        else if (s[i] == 'L')
        number += 50;
        
        else if (s[i] == 'X') {
            if (i + 1 < s.length() && s[i + 1] == 'L') {
                number += 40;
                i++;
            }
            else if (i + 1 < s.length() && s[i + 1] == 'C') {
                number += 90;
                i++;
            } else {
                number += 10;
            }
        }
        
        else if (s[i] == 'V')
        number += 5;
        
        else if (s[i] == 'I') {
            if (i + 1 < s.length() && s[i + 1] == 'V') {
                number += 4;
                i++;
            } 
            else if (i + 1 < s.length() && s[i + 1] == 'X') {
                number += 9;
                i++;
            } else {
                number += 1;
            }
        }
    }
    return number;
}
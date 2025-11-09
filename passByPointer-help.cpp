#include <iostream>

void call(int*, int*);

int main() {
int a = 3, b = 5;


    std::cout << "Before: a: " << a << " b: " << b << '\n';
    call(&a, &b); //Call(&a, &b) these will be accessed as reference for function line 16
    std::cout << "After: a: " << a << " b: " << b;

    return 0;
}
//This will open the reference
void call(int* x, int* y) {
//This will modify the variables
*x = 4;
*y = 7;
//Similar to opening a book (line 16) going to a specific page (line 10) and editing it (lines 18 and 19) 
}
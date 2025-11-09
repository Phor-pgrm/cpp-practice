#include <iostream>

void call(int&, int&);
//Calling functions can have no variable yet
int main() {
int a = 3;
int b = 5;

    call(a, b);
    std::cout << a << b;
    
    return 0;
}

//Essential meaning of passing by reference is we are referencing call(int &x, int &y) to be in call(a, b)
void call(int &x, int &y) {
//Same variables as parameters, can be same name as other variables
x = 4;
y = 7;
//When calling said parameters, must not include data type 
}
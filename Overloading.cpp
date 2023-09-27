/*
    Function overloading is a type of static polymorphism in C++
    where multiple functions with the same name but different
    sets of parameters are defined in the same scope.
    This allows you to use the same function name for multiple
    tasks by providing different arguments while calling the function.
    The appropriate function to call is determined during compile-time
    based on the number and types of the arguments passed.
*/
#include <iostream>
using namespace std;

void print(int num) {
    cout << "Printing int: " << num << endl;
}

void print(double num) {
    cout << "Printing double: " << num << endl;
}

void print(char const *str) {
    cout << "Printing string: " << str << endl;
}

int main() {
    print(5);
    print(3.14);
    print("Hello, world!");

    return 0;
}

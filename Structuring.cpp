#include<bits/stdc++.h>
#include"MyClass.h"

namespace myNamespace {
    int aFunction() {
        return 7;
    }
}

MyClass::MyClass() {
    // class constructor implementation
}

int MyClass::myMethod() {
    return 0;
}

int main() {
    myNamespace::aFunction();

    return 0;
}
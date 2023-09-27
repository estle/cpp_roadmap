#include<bits/stdc++.h>

struct Person {
    std::string name;
    int age;
    float height;
};

class Persona {
public:
    std::string name;
    int age;
public:
    void printInfo() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    };
};

union Data {
    int num;
    char letter;
    float decimal;
};


int main() {
    auto printHello = []() {
        std::cout << "Hello, World!" << std::endl;
    };
    printHello(); // Output: Hello, World!

    int num = 42;
    int* pNum = &num;
    int& numRef = num;
    std::cout << &numRef << ' ' << &num << "; " << &pNum << ' ' << pNum << ' ' << *pNum << std::endl;

    Person p1 = {"John Doe", 30, 5.9};
    std::cout << p1.name << ' ' << p1.height << ' ' << p1.age << "\n";

    Persona p2;
    p2.name = "John Doe";
    p2.age = 30;
    p2.printInfo();

    Data myData;
    myData.num = 42;
}
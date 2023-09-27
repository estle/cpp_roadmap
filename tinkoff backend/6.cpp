#include <iostream>

int main() {
    int mon, year;
    std::cin >> mon >> year;
    if (year%400==0 || (year%4==0 && year%100!=0)) {
        if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12)
            std::cout << 31 << std::endl;
        else if (mon == 2)
            std::cout << 29 << std::endl;
        else
            std::cout << 30 << std::endl;
    }     
    else {
        if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon == 10 || mon == 12)
            std::cout << 31 << std::endl;
        else if (mon == 2)
            std::cout << 28 << std::endl;
        else
            std::cout << 30 << std::endl;
    }
}
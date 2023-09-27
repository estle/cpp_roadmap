#include <iostream>
#include <thread>

void print_sum(int a, int b) {
    std::cout << "The sum is: " << a + b << std::endl;
}

int main() {
    std::thread t(print_sum, 3, 5); // providing function arguments
    t.join(); // waits for the thread to complete
    return 0;
}
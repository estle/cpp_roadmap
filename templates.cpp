#include<iostream>

using namespace std;

/*
Templates in C++ are a powerful feature
that allows you to write generic code,
meaning that you can write a single function
or class that can work with different data types.
This means you do not need to write separate
functions or classes for each data type you want to work with.
*/

template <typename T1, typename T2>
class Pair {
public:
    T1 first;
    T2 second;

    Pair(T1 first, T2 second) : first(first), second(second) {}
};

template <>
class Pair<char, char> {
public:
    char first;
    char second;

    Pair(char first, char second) : first(first), second(second) {
        // Special behavior for characters (e.g., convert to uppercase)
        this->first = std::toupper(this->first);
        this->second = std::toupper(this->second);
    }
};

int main() {
    Pair<int, std::string> pair(1, "Hello");
    cout << ++pair.first << ' ' << pair.second << endl;

    Pair<char, char> charPair('a', 'b');
    cout << charPair.first << ' ' << charPair.second << endl;
}
#include<bits/stdc++.h>

int main() {
    std::string s;
    std::getline(std::cin, s);
    s.erase(remove_if(s.begin(), s.end(), isspace), s.end());
    std::string st = s;
    std::reverse(s.begin(), s.end());
    if (st == s)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}
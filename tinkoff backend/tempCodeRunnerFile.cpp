#include<bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        int a_k;
        std::cin >> a_k;
        a[a_k-1] = i+1;
    }
    for (int i = 0; i < int(a.size()); i++)
        std::cout << a[i] << ' ';
    std::cout << "\n";
}
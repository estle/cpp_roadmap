#include<bits/stdc++.h>

using namespace std;

int s, n;

int main() {
    cin >> s >> n;

    int c = s;
    while (c <= n) {
        n -= c;
        c -= 1;
        if (c == 0)
            c = s;
    }

    cout << n << endl;
}


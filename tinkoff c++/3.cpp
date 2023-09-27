#include<bits/stdc++.h>

using namespace std;

int n;
vector<int> a, b;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        b.push_back(t);
    }

    if (a == b) {
        cout << "YES\n";
        return 0;
    }

    int r = -1, l = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i])
            r = i;
        if (a[i] != b[i] && l == -1)
            l = i;
    }
    if (l == -1) {
        cout << "NO\n";
        return 0;
    }
    sort(a.begin()+l, a.begin()+r+1);
    if(a == b) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
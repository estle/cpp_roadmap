#include<bits/stdc++.h>

using namespace std;

int n, s;
vector<int> a;

int main() {
    cin >> n >> s; // revolvers and dollars
    
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }

    sort(a.begin(), a.end());

    // for (int i = 0; i < n; i++)
    //     cout << a[i] << ' ';
    // cout << endl;

    int j = 0;
    while (a[j] <= s) {
        j++;
        if (j >= n)
            break;
    }
    j--;
    if (j < 0) {
        cout << 0 << endl;
    } else {
        cout << a[j] << endl;
    }
}

/*
5 13
3 10 300 15 3

3 4
5 12 10
*/
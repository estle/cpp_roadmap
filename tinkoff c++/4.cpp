#include<bits/stdc++.h>

using namespace std;

int n, m;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;
    int a[2*m];
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        a[2*i] = t;
        a[2*i+1] = t;
    }
    m *= 2;
    for (int mask = 0; mask < (1 << m); mask++) {
        long long sum = 0;
        vector<int> res;
        for (int i = 0; i < m; i++) {
            if (((mask >> i) & 1) != 0) {
                sum += a[i];
                res.push_back(a[i]);
            }
        }
        if (sum == n) {
            cout << res.size() << "\n";
            for (auto val: res)
                cout << val << " ";
            cout << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}
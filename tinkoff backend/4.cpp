#include<bits/stdc++.h>

using namespace std;

int n, c, d;
vector<int> a, ans;
set<pair<int, int> > li;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> c >> d;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        a.push_back(t);
    }

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] >= 0)
            li.insert(make_pair(a[i], i+1));
        else {
            li.insert(make_pair(abs(a[i]), -(i+1)));
            cnt++;
        }
        ans.push_back(0);
    }

    for (int i = 0; i < c; i++) {
        auto setIterator = li.begin();
        pair<int, int> p = *setIterator;
        li.erase(setIterator);
        
        if (cnt % 2 == 0) {
            if (p.second > 0) {
                p.first -= d;
                if (p.first < 0) {
                    cnt++;
                    p.first = abs(p.first);
                    p.second = -p.second;
                }                    
            } else {
                p.first = -p.first + d;
                if (p.first >= 0) {
                    cnt--;
                    p.second = -p.second;
                } else {
                    p.first = abs(p.first);
                }
            }
        } else {
            if (p.second < 0)
                p.first = abs(-p.first - d);
            else
                p.first += d;
        }

        li.insert(p);
    }

    for (auto p: li) {
        if (p.second > 0)
            ans[p.second-1] = p.first;
        else
            ans[abs(p.second)-1] = -p.first;
    }
    for (auto el: ans)
        cout << el << ' ';
    cout << endl;
}
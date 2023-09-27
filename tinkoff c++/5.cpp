#include<bits/stdc++.h>

using namespace std;

const int N = 2e5 + 1;
int n, m;
vector<int> adj[N];
vector<pair<int, pair<int, int> > > edges;
bool used[N];

void dfs(int v) {
    used[v] = true;
    for (int u: adj[v]) {
        if (!used[u])
            dfs(u);
    }
}

int getCmp(int x) {
    for (int i = 0; i < n; i++) {
        adj[i].clear();
        used[i] = false;
    }
    for (int i = 0; i < m; i++) {
        int u = edges[i].second.first, v = edges[i].first, w = edges[i].second.second;
        if (w > x) {
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            dfs(i);
            cnt++;
        }
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int v, u, w;
        cin >> v >> u >> w;
        v--;
        u--;
        edges.push_back({v, {u, w}});
    }

    int cntCmp = getCmp(0);
    int l = 0, r = 1e9, ans = 0;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (cntCmp == getCmp(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << endl;
}
#include<bits/stdc++.h>

using namespace std;

string s;
map<char, int> m = {
    {'s', 0},
    {'h', 0},
    {'e', 0},
    {'r', 0},
    {'i', 0},
    {'f', 0}
};

int main() {
    cin.tie(0);
    cin >> s;

    for (auto c: s) {
        if (c == 's' || c == 'h' || c == 'e' || c == 'r' || c == 'i' || c == 'f') {
            m[c]++;
        }            
    }

    int mi = int(m['f']/2);
    // cout << mi << endl;
    string tmp = "sheri";
    for (auto c: tmp)
        mi = min(mi, m[c]);

    cout << mi << endl;
}

/*
fheriherffazfszkisrrs

rifftratatashe

thegorillaiswatching
*/
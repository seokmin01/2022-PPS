#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    unordered_set<int> s;
    int n, m, t;
    cin >> n;
    while (n--) {
        cin >> t;
        s.insert(t);
    }
    cin >> m;
    while (m--) {
        cin >> t;
        if (s.find(t) != s.end()) cout << 1 << '\n';
        else cout << 0 << '\n';
    }
}

// unordered_set::find 시간복잡도 - O(1), Hash Architecture

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    unordered_set<string> s;
    vector<string> ans;
    string str;
    int n, m, i;
    cin >> n >> m;
    for (i = 0; i < n; i++) {
        cin >> str;
        s.insert(str);
    }
    for (i = 0; i < m; i++) {
        cin >> str;
        if (s.find(str) != s.end()) ans.push_back(str);
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for (auto a : ans)
        cout << a << '\n';
}

// unordered_set - 빠른 찾기 속도

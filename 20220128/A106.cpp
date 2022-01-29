#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, ans;
    string s;
    cin >> t;
    while (t--) {
        ans = 2015;
        cin >> s;
        sort(s.begin(), s.end());
        s.erase(unique(s.begin(),s.end()),s.end());
        for (auto c : s) ans -= c;
        cout << ans << '\n';
    }
}

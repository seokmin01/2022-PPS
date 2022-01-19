#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, cnt = 1, ans = 666;
    cin >> n;
    while (cnt != n) {
        ans++;
        string s = to_string(ans);
        if (s.find("666") != string::npos) cnt++;
    }
    cout << ans;
}

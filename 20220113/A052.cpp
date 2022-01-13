#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int n, ans, t;
    cin >> n;
    while (n--) {
        t = 1, ans = 0;
        cin >> s;
        for (auto c : s) {
            if (c == 'O') {
                ans += t;
                t++;
            }
            else t = 1;
        }
        cout << ans << '\n';
    }
}

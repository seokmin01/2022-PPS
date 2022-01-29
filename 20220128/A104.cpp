#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, t, mx = 0, ans = 0;
    cin >> n;
    while (n--) {
        cin >> t;
        mx = max(mx, t);
        ans += t;
    }
    cout << ans - mx;
}

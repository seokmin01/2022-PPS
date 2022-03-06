#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    double ans;
    int x, y, n;
    cin >> x >> y >> n;
    ans = (double)x / y;
    while (n--) {
        cin >> x >> y;
        ans = min((double)x / y, ans);
    }
    cout << fixed;
    cout.precision(2);
    cout << ans * 1000;
}

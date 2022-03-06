#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, t, y = 0, m = 0;
    cin >> n;
    while (n--) {
        cin >> t;
        y += (t / 30 + 1) * 10;
        m += (t / 60 + 1) * 15;
    }
    if (y > m) cout << "M " << m;
    else if (m > y) cout << "Y " << y;
    else cout << "Y M " << m;
}

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, cnt;
    cin >> n;
    if (n < 100) {
        cout << n;
        return 0;
    }
    cnt = 99;
    for (int i = 100; i <= n; i++) {
        int h = i / 100, t = (i % 100) / 10, o = (i % 100) % 10;
        if (h - t == t - o) cnt++;
    }
    cout << cnt;
}

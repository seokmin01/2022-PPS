#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i, n, a[50], b[50], s = 0;
    cin >> n;
    for (i = 0; i < n; i++) cin >> a[i];
    for (i = 0; i < n; i++) cin >> b[i];
    sort(a, a + n);
    sort(b, b + n);
    for (i = 0; i < n; i++)
        s += a[i] * b[n-i-1];
    cout << s;
}

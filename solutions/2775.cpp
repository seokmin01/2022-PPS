#include <bits/stdc++.h>
using namespace std;

int func(int k, int n) {
    if (k == 0) return n;
    if (n == 1) return 1;
    return func(k, n-1) + func(k-1, n);
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, k, n;
    cin >> t;
    while (t--) {
        cin >> k >> n;
        cout << func(k, n) << '\n';
    }
}

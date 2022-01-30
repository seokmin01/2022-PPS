#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k, i, cnt = 0;
    cin >> n >> k;
    vector<int> v(n);
    for (i = 0; i < n; i++)
        cin >> v[i];
    for (i = n - 1; i >= 0; i--) {
        cnt += k / v[i];
        k %= v[i];
    }
    cout << cnt;
}

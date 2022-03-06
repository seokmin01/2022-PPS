#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, l, i;
    cin >> n >> l;
    vector<int> h(n);
    for (i = 0; i < n; i++)
        cin >> h[i];
    sort(h.begin(), h.end());
    for (i = 0; i < n; i++) {
        if (l < h[i]) break;
        l++;
    }
    cout << l;
}

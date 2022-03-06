#include <bits/stdc++.h>
using namespace std;

int a[2000001];
int occur[2000001];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i, n, x, cnt = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;
    for (i = 0; i < n; i++) {
        // a[i] 값이 x보다 작아야 함.
        if (x > a[i] && occur[x-a[i]]) cnt++;
        else occur[a[i]] = 1;
    }
    cout << cnt;
}

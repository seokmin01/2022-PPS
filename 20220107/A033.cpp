#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i, j, mx = 0, idx, a, cnt;
    for (i = 1; i <= 5; i++){
        cnt = 0;
        for (j = 0; j < 4; j++) {
            cin >> a;
            cnt += a;
        }
        if (cnt > mx) {
            mx = cnt;
            idx = i;
        }
    }
    cout << idx << ' ' << mx;
}

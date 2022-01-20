#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int A, B, N, t, ans;
    cin >> A >> B >> N;
    ans = abs(A - B);
    while (N--) {
        cin >> t;
        ans = min(abs(t - B) + 1, ans);
    }
    cout << ans;
}

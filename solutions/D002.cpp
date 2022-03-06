#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, h, w, n, a;
    cin >> t;
    while (t--) {
        cin >> h >> w >> n;
        if (n % h) {
            a = (n % h) * 100;
            a += n / h + 1;
        }
        else {
            a = h * 100;
            a += n / h;
        }
        cout << a << '\n';
    }
}

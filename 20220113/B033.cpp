#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, a, b, c;
    cin >> t;
    if (t % 10 != 0) {
        cout << -1;
        return 0;
    }
    a = t / 300;
    t = t % 300;
    b = t / 60;
    t = t % 60;
    c = t / 10;
    cout << a << ' ' << b << ' ' << c;
}

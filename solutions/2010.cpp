#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, a, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        s += a;
    }
    cout << s - n + 1;
}

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int sum = i, t = i;
        while (t) {
            sum += t % 10;
            t /= 10;
        }
        if (sum == n) {
            cout << i;
            return 0;
        }
    }
    cout << 0;
}

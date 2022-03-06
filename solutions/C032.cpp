#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, t = 1, cnt = 1;
    cin >> n;
    while (n > t) {
        t += cnt * 6;
        cnt++;
    }
    cout << cnt;
}

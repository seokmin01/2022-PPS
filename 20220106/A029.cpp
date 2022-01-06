#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, a;
    cin >> n >> a;
    if (n > 5) cout << "Love is open door";
    else
        for (int i = 0; i < n - 1; i++) {
            a = !a;
            cout << a << '\n';
        }
}

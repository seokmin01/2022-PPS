#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n > 1) {
        for (int i = 2; i <=n; i++) {
            if (n % i == 0) {
                cout << i << '\n';
                n /= i;
                break;
            }
        }
    }
}

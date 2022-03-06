#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 0, a;
    for (int i = 0; i < 5; i++) {
        cin >> a;
        n += a * a;
    }
    cout << n % 10;
}

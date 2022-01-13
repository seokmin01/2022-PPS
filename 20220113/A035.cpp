#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    double n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n;
        getline(cin, s);
        for (auto c : s) {
            if (c == '@') n *= 3;
            if (c == '%') n += 5;
            if (c == '#') n -= 7;
        }
        cout << fixed;
        cout.precision(2);
        cout << n << '\n';
    }
}

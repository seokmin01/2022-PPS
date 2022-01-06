#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int mx = 0, p = 0, in, out;
    for (int i = 0; i < 4; i++) {
        cin >> out >> in;
        p = p - out + in;
        if (p > mx) mx = p;
    }
    cout << mx;
}

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<int> Q;
    int n, k, i;
    cin >> n >> k;
    for (i = 1; i <= n; i++) Q.push(i);
    cout << '<';
    while (!Q.empty()) {
        for (i = 0; i < k - 1; i++) {
            Q.push(Q.front());
            Q.pop();
        }
        cout << Q.front();
        Q.pop();
        if (!Q.empty()) cout << ", ";
    }
    cout << '>';
}

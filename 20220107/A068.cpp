#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    queue<int> Q;
    int n, x;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s == "push") {
            cin >> x;
            Q.push(x);
        }
        else if (s == "pop") {
            if (Q.empty()) cout << -1;
            else {
                cout << Q.front();
                Q.pop();
            }
            cout << '\n';
        }
        else if (s == "size") {
            cout << Q.size() << '\n';
        }
        else if (s == "empty") {
            cout << Q.empty() << '\n';
        }
        else if (s == "front") {
            if (Q.empty()) cout << -1;
            else cout << Q.front();
            cout << '\n';
        }
        else if (s == "back") {
            if (Q.empty()) cout << -1;
            else cout << Q.back();
            cout << '\n';
        }
    }
}

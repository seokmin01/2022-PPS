#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    stack<int> ST;
    int n, x;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s == "push") {
            cin >> x;
            ST.push(x);
        }
        else if (s == "pop") {
            if (ST.empty()) cout << -1;
            else {
                cout << ST.top();
                ST.pop();
            }
            cout << '\n';
        }
        else if (s == "size") {
            cout << ST.size() << '\n';
        }
        else if (s == "empty") {
            cout << ST.empty() << '\n';
        }
        else if (s == "top") {
            if (ST.empty()) cout << -1;
            else cout << ST.top();
            cout << '\n';
        }
    }
}

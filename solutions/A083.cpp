#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, a;
    cin >> n;
    set<int> s;
    while (n--) {
        cin >> a;
        s.insert(a);
    }
    for (auto i : s)
        cout << i << ' ';
}

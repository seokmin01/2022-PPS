#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v(26, 0);
    string s;
    cin >> s;
    for (auto c : s) {
        if (c >= 'a') c -= 'a' - 'A';
        v[c - 'A']++;
    }
    int mx = *max_element(v.begin(), v.end());
    if (mx == 0) {
        cout << '?';
        return 0;
    }
    int cnt = 0, mx_i;
    for (int i = 0; i < 26; i++) {
        if(v[i] == mx) {
            cnt++;
            mx_i = i;
        }
    }
    if (cnt > 1) cout << '?';
    else cout << (char)(mx_i + 'A');
}

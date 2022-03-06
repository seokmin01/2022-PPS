#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    int n, cnt = 0;
    cin >> n;
    while (n--) {
        vector<int> v(26, 0);
        bool k = 1;
        cin >> s;
        v[s[0] - 'a']++;
        for (int i = 1; i < s.length(); i++) {
            if (v[s[i] - 'a'] && s[i] != s[i-1]) {
                k = 0;
                break;
            }
            v[s[i] - 'a']++;
        }
        if (k) cnt++;
    }
    cout << cnt;
}

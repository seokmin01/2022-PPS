#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b) {
    if (a.length() != b.length())
        return a.length() < b.length();
    int s_a = 0, s_b = 0;
    for (auto c : a)
        if (c >= '0' && c <= '9') s_a += (c - '0');
    for (auto c : b)
        if (c >= '0' && c <= '9') s_b += (c - '0');
    if (s_a != s_b)
        return s_a < s_b;
    return a < b;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, i;
    cin >> n;
    vector<string> v(n);
    for (i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), comp);
    for (i = 0; i < n; i++)
        cout << v[i] << '\n';
}

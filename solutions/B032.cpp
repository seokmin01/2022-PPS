#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    int n, t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i = 0; i < n; i++)
        v[i] += i + 1;
    int mx = *max_element(v.begin(), v.end());
    cout << mx + 1;
}

#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, i;
    cin >> n;
    vector<pair<int, string>> v(n);
    for (i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;
    stable_sort(v.begin(), v.end(), comp);
    for (i = 0; i < n; i++)
        cout << v[i].first << ' ' << v[i].second << '\n';
}

// stable_sort - 조건이 같다면 정렬 순서를 유지

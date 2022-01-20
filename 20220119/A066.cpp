#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    vector<char> v;
    for (auto c : s)
        v.push_back(c);
    sort(v.begin(), v.end(), greater<char>());
    for (auto c : v)
        cout << c;
}

// grearter<자료형>() - 내림차순 정렬

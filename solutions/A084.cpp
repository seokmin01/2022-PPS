#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int l = s.length();
    vector<string> v;
    for (int i = 0; i < l; i++)
        v.push_back(s.substr(i, l));
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << '\n';
}

// substr(pos, count) - pos + count가 문자열 범위 밖이면, pos부터 문자열 끝까지 리턴한다.

#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<string> str = {
        "zero", "one", "two", "three",
        "four", "five", "six", "seven",
        "eight", "nine"
    };
    vector<pair<string, int>> v;
    string s;
    int M, N, i;
    cin >> M >> N;
    for (i = M; i <= N; i++) {
        if (i >= 10)
            s = str[i/10] + ' ' + str[i%10];
        else
            s = str[i];
        v.push_back(make_pair(s, i));
    }
    sort(v.begin(), v.end());
    for (i = 0; i < v.size(); i++) {
        cout << v[i].second << ' ';
        if (i % 10 == 9) cout << '\n';
    }
}

// 1 ≤ M ≤ N ≤ 99

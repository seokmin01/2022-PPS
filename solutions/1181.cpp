#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b) {
    if (a.length() != b.length())
        return a.length() < b.length();
    return a < b;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    set<string, decltype(comp)*> dict(comp);
    string s;
    while (n--) {
        cin >> s;
        dict.insert(s);
    }
    for (auto i : dict)
        cout << i << '\n';
}

// https://stackoverflow.com/questions/2620862/using-custom-stdset-comparator
// 3번째 솔루션

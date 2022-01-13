#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int lt[] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};
    int cnt = 0;
    string s;
    cin >> s;
    for (auto c : s)
        cnt += lt[c - 'A'] + 1;
    cout << cnt;
}

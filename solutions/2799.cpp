#include <bits/stdc++.h>
using namespace std;

char p[501][501];
int cnt[5];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m, n, i, j;
    cin >> m >> n;
    for (i = 0; i < 5 * m + 1; i++)
        for (j = 0; j < 5 * n + 1; j++)
            cin >> p[j][i];
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (p[5 * j + 1][5 * i + 4] == '*') cnt[4]++;
            else if (p[5 * j + 1][5 * i + 3] == '*') cnt[3]++;
            else if (p[5 * j + 1][5 * i + 2] == '*') cnt[2]++;
            else if (p[5 * j + 1][5 * i + 1] == '*') cnt[1]++;
            else cnt[0]++;
        }
    }
    for (i = 0; i < 5; i++)
        cout << cnt[i] << ' ';
}

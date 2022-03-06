#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, sum, ans = 0;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                sum = v[i] + v[j] + v[k];
                if (sum <= m && sum > ans)
                    ans = sum;
            }
        }
    }
    cout << ans;
}

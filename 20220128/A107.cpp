#include <bits/stdc++.h>
using namespace std;

int arr[1001];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, i, j, idx = 0, ans = 0;
    cin >> a >> b;
    for (i = 1; i <= 1000; i++)
        for (j = 0; j < i && idx < 1000; j++)
            arr[idx++] = i;
    for (i = a - 1; i < b; i++)
        ans += arr[i];
    cout << ans;
}

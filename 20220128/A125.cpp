#include <bits/stdc++.h>
using namespace std;

int arr[100001];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, t, mx = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n, greater<int>());
    for (int i = 0; i < n; i++) {
        t = arr[i] * (i + 1);
        mx = max(t, mx);
    }
    cout << mx;
}

// 내림차순 정렬

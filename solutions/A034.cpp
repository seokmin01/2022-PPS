#include <bits/stdc++.h>
using namespace std;

int arr[42];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, i, cnt = 0;
    for (i = 0; i < 10; i++) {
        cin >> n;
        arr[n%42]++;
    }
    for (i = 0; i < 42; i++)
        if (arr[i] > 0) cnt++;
    cout << cnt;
}

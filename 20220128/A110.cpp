#include <bits/stdc++.h>
using namespace std;

int arr[] = {500, 100, 50, 10, 5, 1};
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, cnt = 0;
    cin >> n;
    n = 1000 - n;
    for (int i = 0; i < 6; i++) {
        cnt += n / arr[i];
        n %= arr[i];
    }
    cout << cnt;
}

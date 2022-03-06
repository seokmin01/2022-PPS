#include <bits/stdc++.h>
using namespace std;

int arr[10];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i, k, n = 1;
    for (i = 0; i < 3; i++) {
        cin >> k;
        n *= k;
    }
    while (n) {
        arr[n%10]++;
        n /= 10;
    }
    for (i = 0; i < 10; i++)
        cout << arr[i] << '\n';
}

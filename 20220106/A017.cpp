#include <bits/stdc++.h>
using namespace std;

int arr[9];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n) {
        if (n%10 == 9) arr[6]++;
        else arr[n%10]++;
        n /= 10;
    }
    arr[6] = (arr[6] + 1) / 2;
    int max = 0;
    for (int i = 0; i < 9; i++)
        if (arr[i] > max) max = arr[i];
    cout << max;
}

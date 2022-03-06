#include <bits/stdc++.h>
using namespace std;

int arr[26];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, predaja = 1;
    cin >> n;
    while (n--) {
        string t;
        cin >> t;
        arr[t[0] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (arr[i] >= 5) {
            cout << (char)(i + 'a');
            predaja = 0;
        }
    }
    if (predaja == 1) cout << "PREDAJA";
}

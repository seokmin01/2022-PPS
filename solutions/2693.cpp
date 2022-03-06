#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    cin >> t;
    while (t--) {
        vector<int> A;
        for (int i = 0; i < 10; i++) {
            cin >> n;
            A.push_back(n);
        }
        sort(A.begin(), A.end());
        cout << A[7] << '\n';
    }
}

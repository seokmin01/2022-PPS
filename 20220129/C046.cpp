#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "String #" << i + 1 << '\n';
        string s;
        cin >> s;
        for (auto c : s) {
            if (c == 'Z') cout << 'A';
            else cout << (char)(c + 1);
        }
        cout << "\n\n";
    }
}

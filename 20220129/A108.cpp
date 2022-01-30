#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n, r, sum;
    cin >> t;
    while (t--) {
        cin >> n;
        sum = n;
        r = 0;
        while (n) {
            r *= 10;
            r += n % 10;
            n /= 10;
        }
        sum += r;
        string s = to_string(sum);
        reverse(s.begin(), s.end());
        cout << (to_string(sum) == s ? "YES" : "NO") << '\n';
    }
}

/*
정수를 reverse 하는 방법 두 가지
cout 삼항연산자 괄호
*/

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a < b) swap(a, b);
    while (b != 0) {
        int n = a % b;
        a = b;
        b = n;
    }
    return a;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << a * b / gcd(a, b) << '\n';
    }
}

/*
유클리드 호제법
최소공배수 = 두 수의 곱 / 최대공약수
*/

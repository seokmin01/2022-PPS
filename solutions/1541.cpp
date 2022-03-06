#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int result = 0, n = 0;
    char op = '+';
    for (auto c : s) {
        if (c >= '0' && c <= '9')
            n = n * 10 + (c - '0');
        else {
            if (op == '+') result += n;
            if (op == '-') result -= n;
            if ( c == '-') op = '-';
            n = 0;
        }
    }
    if (op == '+') result += n;
    if (op == '-') result -= n;
    cout << result;
}

// 문자열 순회가 끝난 후 마지막 숫자 케이스도 처리해줘야 한다.

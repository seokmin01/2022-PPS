#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long a, b, c;
    cin >> a >> b >> c;
    if (b >= c) {
        cout << -1;
        return 0;
    }
    cout << a / (c - b) + 1;
}

/*
손익분기점을 n이라 하자,
양변을 n에 대해서 정리하면 a/(c-b) < n 식이 나오고, 이 식을 만족하는 첫번째 n은 좌항에 1을 더한 값이다.
*/

#include <bits/stdc++.h>
using namespace std;

int d[20];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    d[1] = 1; d[2] = 2; d[3] = 4;
    for (int i = 4; i < 11; i++)
        d[i] = d[i-1] + d[i-2] + d[i-3];

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << d[n] << '\n';
    }
}

/*
DP 문제 푸는 단계
1. 테이블 정의하기
2. 점화식 찾기
3. 초기값 정하기
*/

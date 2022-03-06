#include <bits/stdc++.h>
using namespace std;

int arr[501][501];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n, m, i, j, res;
    cin >> t;
    while (t--) {
        res = 1;
        cin >> n >> m;
        for (j = 0; j < n; j++)
            for (i = 0; i < m; i++)
                cin >> arr[j][i];
        for (i = 1; i < m; i++)
            for (j = 1; j < n; j++)
                if (arr[j-1][i-1] + arr[j][i] > arr[j-1][i] + arr[j][i-1]) res = 0;
        if (res == 0) cout << "NO\n";
        else cout << "YES\n";
    }
}

/*
i, m - 가로
j, n - 세로

- 작은 네모
    k = i + 1
    l = j + 1

귀납적 성질
A[i][j] + A[k][l] ≤ A[i][l] + A[k][j]
작은 네모 각각에 대해 위 등식이 성립한다면, 큰 하나의 네모에 대해서도 등식이 성립한다.
따라서, 모든 (i, j)와 (i + 1, j + 1) 쌍에 대해서 위 등식이 성립하는지 확인하면 된다.
*/

#include <bits/stdc++.h>
using namespace std;

int arr[500001], cnt[8001];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, sum = 0, mode, mode_cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
        cnt[arr[i] + 4000]++;
        mode_cnt = max(cnt[arr[i] + 4000], mode_cnt);
    }
    sort(arr, arr + n);
    bool isSecond = false;
    for (int i = -4000; i <= 4000; i++) {
		if (cnt[i + 4000] == mode_cnt) {
			mode = i;
			if (isSecond) break;
			isSecond = true;
		}
	}
    cout << round((double)sum / n) << '\n';
    cout << arr[n / 2] << '\n';
    cout << mode << '\n';
    cout << arr[n - 1] - arr[0];
}

/*
mean, median, mode, range
음수 주의
최빈값 구하기 (여러 개 있을 때에는 최빈값 중 두 번째로 작은 값 구하기)
1. 최대 빈도값을 구한다.
2. cnt 배열을 순회하면서 최대 빈도값과 같은지 비교한다.
    첫번째로 같다면 최빈값을 저장하고 isSecond를 참으로 저장한다.
    두번째로 같다면 최빈값을 저장하고 반복문을 탈출한다.
*/

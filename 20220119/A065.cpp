#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int x, y;
    vector<pair<int, int>> v;
    while (n--) {
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size() ; i++)
        cout << v[i].first << ' ' << v[i].second << '\n';
}

// STL sort - first가 같으면 second를 기준으로 정렬함

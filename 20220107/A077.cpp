#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<pair<int, int>> V;
    vector<int> ans;
    int n, i, s = 0;
    for (i = 0; i < 8; i++) {
        cin >> n;
        V.push_back(make_pair(n, i+1));
    }
    sort(V.begin(), V.end());
    for (i = 3; i < V.size() ; i++) {
        s += V[i].first;
        ans.push_back(V[i].second);
    }
    sort(ans.begin(), ans.end());
    cout << s << '\n';
    for (i = 0; i < ans.size() ; i++) cout << ans[i] << ' ';
}

#include <bits/stdc++.h>
using namespace std;
vector<int> p[101];
bool vis[101];
int n, t, a, b, cnt = 0;

void dfs(int x) {
    vis[x] = 1;
    for (int i = 0; i < p[x].size(); i++) {
        int y = p[x][i];
        if (!vis[y]) {
            dfs(y);
            cnt++;
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> t;
    while (t--) {
        cin >> a >> b;
        p[a].push_back(b);
        p[b].push_back(a);
    }
    dfs(1);
    cout << cnt << '\n';
}

#include <bits/stdc++.h>
using namespace std;
vector<int> p[1001];
bool vis[1001];
int n, m, a, b, ans = 0;

void bfs(int x) {
    queue<int> Q;
    Q.push(x);
    vis[x] = 1;
    while (!Q.empty()) {
        x = Q.front();
        Q.pop();
        for (int i = 0; i < p[x].size(); i++) {
            int y = p[x][i];
            if (!vis[y]) {
                Q.push(y);
                vis[y] = 1;
            }
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    while (m--) {
        cin >> a >> b;
        p[a].push_back(b);
        p[b].push_back(a);
    }
    for (int i = 1; i <= n; i++) {
        if (vis[i]) continue;
        ans++;
        bfs(i);
    }
    cout << ans;
}

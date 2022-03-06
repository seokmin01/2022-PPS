#include <bits/stdc++.h>
using namespace std;
vector<int> p[1001];
bool vis_dfs[1001];
bool vis_bfs[1001];
int n, m, v, a, b;

void dfs(int x) {
    cout << x << ' ';
    vis_dfs[x] = 1;
    for (int i = 0; i < p[x].size(); i++) {
        int y = p[x][i];
        if (!vis_dfs[y])
            dfs(y);
    }
}

void bfs(int x) {
    queue<int> Q;
    Q.push(x);
    vis_bfs[x] = 1;
    while (!Q.empty()) {
        x = Q.front();
        cout << x << ' ';
        Q.pop();
        for (int i = 0; i < p[x].size(); i++) {
            int y = p[x][i];
            if (!vis_bfs[y]) {
                Q.push(y);
                vis_bfs[y] = 1;
            }
        }
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> v;
    while (m--) {
        cin >> a >> b;
        p[a].push_back(b);
        p[b].push_back(a);
    }
    for (int i = 0; i < 1000; i++)
        sort(p[i].begin(), p[i].end());
    dfs(v);
    cout << '\n';
    bfs(v);
}

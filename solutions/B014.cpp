#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int h, w;
int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i, j;
    while (1) {
        int board[51][51] = { 0, };
        bool vis[51][51] = { 0, };
        int cnt = 0;
        cin >> w >> h;
        if (w == 0 && h == 0) break;
        for (i = 0; i < h; i++)
            for (j = 0; j < w; j++)
                cin >> board[i][j];
        for (i = 0; i < h; i++) {
            for (j = 0; j < w; j++) {
                if (board[i][j] == 0 || vis[i][j]) continue;
                cnt++;
                queue<pair<int, int> > Q;
                vis[i][j] = 1;
                Q.push({i, j});
                while (!Q.empty()) {
                    pair<int, int> cur = Q.front();
                    Q.pop();
                    for (int dir = 0; dir < 8; dir++) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
                        if (vis[nx][ny] || board[nx][ny] != 1) continue;
                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }
            }
        }
        cout << cnt << '\n';
    }
}

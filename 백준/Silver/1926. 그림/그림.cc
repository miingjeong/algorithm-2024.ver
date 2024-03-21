#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int board[501][501];
bool visited[501][501];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    queue <pair<int, int>> q;

    int mx = 0; //그림의 최댓값
    int num = 0; // 그림의 수

    int dx[4] = { 1, 0, -1, 0 };
    int dy[4] = { 0, 1, 0, -1 };

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cin >> board[i][j];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (board[i][j] == 0 || visited[i][j]) continue;
            num++;
            visited[i][j] = 1;
            q.push({ i, j });
            int area = 0;
            while (!q.empty()) {
                area++;
                pair<int, int> cur = q.front(); q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
                    if (visited[nx][ny] || board[nx][ny] != 1) continue;
                    visited[nx][ny] = 1;
                    q.push({ nx,ny });
                }
            }
            mx = max(mx, area);
        }
    }
    cout << num << '\n' << mx;
}



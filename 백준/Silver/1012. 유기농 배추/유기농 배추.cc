#include <bits/stdc++.h>
using namespace std;

const int MAX = 51;
int test_case, m,n,k;
int board[MAX][MAX];
int visited[MAX][MAX];
int dy[] = { 0,0,-1,1 };
int dx[] = { -1,1,0,0 };

void DFS(int y, int x) 
{
	visited[y][x] = 1;

	for (int i = 0; i < 4; i++) 
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= m || ny < 0 || ny >= n)
			continue;

		if (board[ny][nx] == 1 && visited[ny][nx] == 0) {
			DFS(ny, nx);
		}
	}
}

int main() 
{
    cin >> test_case;

    for(int i = 0; i< test_case; ++i)
    {
        cin >> m >> n >> k;

        memset(board, 0, sizeof(board));
        memset(visited, 0, sizeof(visited));

        for(int i =0 ; i<k; ++i)
        {
            int x, y;
            cin >> x >> y;
            board[y][x] = 1;
        }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 1 && visited[i][j] == 0) {
                    DFS(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}

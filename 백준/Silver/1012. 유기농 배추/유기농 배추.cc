#include <bits/stdc++.h>
using namespace std;

int t, m, n, k, cx, cy,a[54][54], nx,ny,ret, q;
int visited[54][54];
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
void dfs(int y, int x)
{
	visited[y][x] = 1;
	for(int i = 0; i<4; ++i)
	{
		ny = y + dy[i];
		nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
		if(a[ny][nx] == 1 && visited[ny][nx] == 0)
			dfs(ny,nx);
	}
	return;
}

int main()
{
	cin >> t;
	while(t--)
	{
		fill(&a[0][0], &a[0][0] + 54*54, 0);
		fill(&visited[0][0], &visited[0][0] + 54 *54,0);
		ret = 0;
		cin >> m >> n >> k;
		for(int i = 0; i < k; ++i)
		{
			cin >> cx >> cy;
			a[cy][cx] = 1;
		}	
		
		for(int i=0;i<n;++i)
		{
			for(int j = 0; j< m; ++j)
			{
				if(a[i][j] == 1 && visited[i][j]==0)
				{
					dfs(i,j);
					//cout << i << j << '\n';
					ret++;
				}
			}
		}
		cout << ret << '\n';
	}
}
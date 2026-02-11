#include<bits/stdc++.h>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0};

int a[104][104];
int visited[104][104];
int n, m,x,y,nx,ny,ret;

int main()
{
	scanf("%d %d",&n, &m);
	
	for(int i = 0; i< n; ++i)
	{
		for(int j = 0; j<m;++j)
		{
			scanf("%1d", &a[i][j]);
		}
	}
	queue<pair<int,int> > q;
	visited[0][0] = 1;
	q.push({0,0});
	while(q.size())
	{
		tie(y, x) = q.front();
		q.pop();
		for(int i = 0; i<4;++i)
		{
			ny = y + dy[i];
			nx = x + dx[i];
			if(nx < 0 || ny < 0 || ny >= n || nx >= m || a[ny][nx] == 0)
				continue;
			if(visited[ny][nx]) continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ny, nx});
		}
	}
	printf("%d", visited[n-1][m-1]);
    return 0;
}
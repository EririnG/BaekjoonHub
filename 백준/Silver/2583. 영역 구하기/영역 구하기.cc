#include<bits/stdc++.h>

using namespace std;
#define y1 aaaa
int n,m, a[101][101],ny,nx,rec;
bool visited[101][101];
vector<int> vret;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

int dfs(int y, int x)
{
	visited[y][x] = 1;
	int ret = 1;
	for(int i = 0; i<4;++i)
	{
		ny = y + dy[i];
		nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= m || nx >= n ) continue;
		if(visited[ny][nx] == true) continue;
		if(a[ny][nx] == 1) continue;
		ret += dfs(ny,nx);
	}
	return ret;
}

int main()
{
	cin >> m >> n >> rec;
	for(int i = 0; i< rec; ++i)
	{
		int x1,x2,y1,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		for(int x = x1; x < x2; ++x)
		{
			for(int y = y1; y < y2; ++y)
			{
				a[y][x] = 1;
			}
		}
	}
	

	for(int i = 0; i< m; ++i)
	{
		for(int j = 0; j <n; ++j)
		{
			if(a[i][j] != 1 & visited[i][j] == false)
			{
				vret.push_back(dfs(i,j));
			}
		}
	}
	sort(vret.begin(), vret.end());
	cout << vret.size() << '\n';
	for(int a : vret) 
		cout << a << " ";
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10002];
vector<int> result_bfs;
vector<int> result_dfs;
bool visited[1002];

void dfs(int x)
{
	visited[x] = true;
	result_dfs.push_back(x);
	for (int i = 0; i < adj[x].size(); ++i)
	{
		if (!visited[adj[x][i]])
			dfs(adj[x][i]);
	}
}

void bfs(int x)
{
	queue<int> q;
	q.push(x);
	visited[x] = true;
	while (!q.empty())
	{
		int tmp = q.front();
		q.pop();
		result_bfs.push_back(tmp);
		for (int i = 0; i < adj[tmp].size(); ++i)
		{
			if (!visited[adj[tmp][i]])
			{
				q.push(adj[tmp][i]);
				visited[adj[tmp][i]] = true;
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int node, edge, start;
	cin >> node >> edge >> start;
	for (int i = 0; i < edge; ++i)
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for (int i = 1; i <= node; ++i)
	{
		sort(adj[i].begin(), adj[i].end());
	}
	bfs(start);
	memset(visited, false, sizeof(visited));
	dfs(start);
	for (auto i : result_dfs)
		cout << i << " ";
	cout << "\n";
	for (auto i : result_bfs)
		cout << i << " ";
	
	return 0;
}

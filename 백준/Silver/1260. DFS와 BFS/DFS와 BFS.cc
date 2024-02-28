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

int main() {
	int n, m, v, a, b;
	cin >> n >> m >> v;

	for (int i = 1; i <= m; i++) {
		cin >> a >> b;
		adj[a].push_back(b); //양방향 간선처리
		adj[b].push_back(a); //양방향 간선처리
	}
	for (int i = 1; i <= n; i++) {
		sort(adj[i].begin(), adj[i].end()); // 낮은 숫자부터 탐색.
	}
	bfs(v);
	memset(visited, false, sizeof(visited));
	dfs(v);
	for (int i = 0; i < result_dfs.size(); i++) {
		cout << result_dfs[i] << " ";
	}
	cout << '\n';
	for (int i = 0; i < result_bfs.size(); i++) {
		cout << result_bfs[i] << " ";
	}

	return 0;
}


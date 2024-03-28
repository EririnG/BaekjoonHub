#include<bits/stdc++.h>

using namespace std;


int t,n,k,w;


int main()
{
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		int time_table[1002];
		int result[1002];
		int indegree[1002] = { 0, };
		vector<int> adj[1002];
		queue<int> q;
		
		cin >> n >> k;
		for (int j = 1; j <= n; ++j)
		{
			cin >> time_table[j];
		}

		while (k--) {
			int X, Y;
			cin >> X >> Y;
			adj[X].push_back(Y);
			indegree[Y]++;
		}
		cin >> w;

		for (int j = 1; j <= n; ++j)
		{
			if (indegree[j] == 0)
				q.push(j);
			result[j] = time_table[j];
		}

		while (!q.empty())
		{
			int x = q.front();
			q.pop();
			for (int j = 0; j < adj[x].size(); ++j)
			{
				int y = adj[x][j];
				--indegree[y];
				result[y] = max(result[y], result[x] + time_table[y]);
				if (0 == indegree[y])
					q.push(y);
			}
		}
		cout << result[w] << "\n";
	}
	return 0;
}
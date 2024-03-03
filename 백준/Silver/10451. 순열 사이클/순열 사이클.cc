#include <bits/stdc++.h>
using namespace std;
vector<int> adj(1001);
int visited[1001];
int ans;

void dfs(int x)
{
    visited[x] = 1;
    if (!visited[adj[x]])
    {
        dfs(adj[x]);
    }
}
int main() 
{
    int test_case, node, max = 0, check;
    cin >> test_case;

    for (int i = 0; i < test_case; ++i)
    {
        cin >> node;
        memset(visited, 0, sizeof(visited));
        
        for (int j = 1; j <= node; ++j)
        {
            int tmp;
            cin >> tmp;
            adj[j] = tmp;
        }
        check = 0;
        
        for (int j = 1; j <= node; ++j)
        {
            if (!visited[j])
            {
                dfs(j);
                ++check;
            }
        }
        cout << check << '\n';
    }

}

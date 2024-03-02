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
    int test_case, max = 0, check, ans;
    cin >> test_case;

    for (int i = 1; i <= test_case; ++i)
    {
        int tmp;
        cin >> tmp;
        adj[i] = tmp;
    }
    for (int i = 1; i <= test_case; ++i)
    {
        memset(visited, 0, sizeof(visited));
        check = 0;
        dfs(i);
        for (int j = 1; j <= test_case; ++j) 
        {
            if (visited[j])
                ++check;
        }
        if (check > max)
        {
            max = check;
            ans = i;
        }
    }
    cout << ans;
}

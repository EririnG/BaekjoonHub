#include <bits/stdc++.h>
using namespace std;
vector<int> adj(1001);
int visited[1001];
string move_s;

void dfs(int x)
{
    if (visited[x])
        return;
    visited[x] = 1;
    if (move_s[x] == 'E')
        dfs(x+1);
    else
        dfs(x - 1);
}
int main() 
{
    int block, ans = 0;
    
    cin >> block >>move_s;
    for (int i = 0; i < move_s.size(); ++i)
    {
        if (!visited[i] && move_s[i] == 'E')
        {
            dfs(i);
            ++ans;
        }
    }
    cout << ans;

}

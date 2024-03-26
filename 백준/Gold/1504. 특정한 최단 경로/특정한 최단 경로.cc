#include <bits/stdc++.h>
using namespace std;

int INF = 98765432;
vector<pair<int, int>> v[802];
int dist[803];
void bfs(int a)
{
    memset(dist, INF, sizeof(dist));
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push(make_pair(0, a));
    dist[a] = 0;
    while (!q.empty())
    {
        int sum_distance = q.top().first;
        int x = q.top().second;
        q.pop();

        if (dist[x] < sum_distance)
            continue;
        for (int i = 0; i < v[x].size(); i++) {
            int nx = v[x][i].first;
            int ncost = sum_distance + v[x][i].second;

            if (dist[nx] > ncost) {
                q.push({ ncost, nx });
                dist[nx] = ncost;
            }
        }
    }
}

int compare_ab(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main() 
{
    int node, edge, result;
    cin >> node >> edge;
    for (int i = 0; i < edge; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({ b,c });
        v[b].push_back({ a,c });
    }
    int dest1, dest2;
    cin >> dest1 >> dest2;
    
    bfs(1);
    int to_dest1 = dist[dest1];
    int to_dest2 = dist[dest2];

    bfs(dest1);
    int dest1_to_dest2 = dist[dest2];
    int dest1_to_node = dist[node];

    bfs(dest2);
    int dest2_to_node = dist[node];

    result = compare_ab(INF, to_dest1 + dest1_to_dest2 + dest2_to_node);
    result = compare_ab(result, to_dest2 + dest1_to_dest2 + dest1_to_node);
    if (result >= INF)
        cout << -1;
    else
        cout << result;

}

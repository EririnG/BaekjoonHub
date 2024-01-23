import sys
sys.setrecursionlimit(10**6)

def dfs(start):
    visited[start] = True
    for i in adj[start]:
        if not visited[i]:
            dfs(i)

v, e = map(int,sys.stdin.readline().split())
adj = [[]for i in range(v+1)]
ans = 0
for i in range(e):
    a, b = map(int,sys.stdin.readline().split())
    adj[a].append(b)
    adj[b].append(a)

for i in adj:
    i.sort()
visited = [False]*(v+1)
for i in range(1,v+1):
    if not visited[i]:
        dfs(i)
        ans += 1

print(ans)

import sys
from collections import deque

sys.setrecursionlimit(10**5)

def dfs(v):
     print(v, end=' ')
     visited[v] = True
     for e in adj[v]:
          if not(visited[e]):
               dfs(e)
def bfs(v):
     q = deque([v])
     while q:
          v= q.popleft()
          if not(visited[v]):
               visited[v] = True
               print(v, end=' ')
               for e in adj[v]:
                    if not visited[e]:
                         q.append(e)

v, e ,start = map(int,sys.stdin.readline().split())
adj = [[]for i in range(v+1)]
for i in range(e):
    a, b = map(int,sys.stdin.readline().split())
    adj[a].append(b)
    adj[b].append(a)

for i in adj:
    i.sort()

visited = [False]*(v+1)
dfs(start)
print()
visited = [False]*(v+1)
bfs(start)

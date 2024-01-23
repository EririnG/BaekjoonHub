import sys
from collections import deque

v, e, k, start = map(int,sys.stdin.readline().split())
adj = [[]for i in range(v+1)]
arr = [0 for i in range(v+1)]
for i in range(e):
    a, b = map(int,sys.stdin.readline().split())
    adj[a].append(b)
ans = []

def bfs(start):
    q = deque([start])
    visited[start] = True
    while q:
        start = q.popleft()
        for i in adj[start]:
            if not visited[i]:
                visited[i] = True
                q.append(i)
                arr[i] = arr[start]+1
                if arr[i] == k:
                    ans.append(i)

    if len(ans)==0:
        print(-1)
    else:
        ans.sort()
        for i in ans:
            print(i)
                    

visited = [False]*(v+1)
bfs(start)
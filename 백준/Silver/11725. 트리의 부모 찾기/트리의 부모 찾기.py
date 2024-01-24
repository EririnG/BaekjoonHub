import sys

sys.setrecursionlimit(10 **7)

v = int(sys.stdin.readline())
adj = [[]for i in range(v+1)]
for i in range(v-1):
    a, b = map(int,sys.stdin.readline().split())
    adj[a].append(b)
    adj[b].append(a)

visited = [0] * (v+1)
def dfs(start):
    for i in adj[start]:
        if visited[i] == 0:
            visited[i] = start
            dfs(i)

dfs(1)

for i in range(2,v+1):
    print(visited[i])
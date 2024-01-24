import sys
from collections import deque

n, m = map(int,sys.stdin.readline().split())
graph = []

for i in range(n):
    graph.append(list(map(int,sys.stdin.readline().rstrip())))

def bfs(x,y):
    q = deque()
    q.append((x,y))
    dx = [-1,1,0,0]
    dy = [0,0,-1,1]
    while q:
        x,y = q.popleft()
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]

            if nx < 0 or nx >= n or ny < 0 or ny >= m:
                continue
            if graph[nx][ny] == 0:
                continue
            elif graph[nx][ny] == 1:
                graph[nx][ny] = graph[x][y] + 1
                q.append((nx,ny))
        
    print(graph[-1][-1])

bfs(0,0)
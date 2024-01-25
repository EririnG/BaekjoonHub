import sys
from collections import deque

n,m = map(int,sys.stdin.readline().split())
floor = []
for i in range(n):
    floor.append(list(map(str,sys.stdin.readline().rstrip())))
visited = [[False for i in range(m)] for i in range(n)]
cnt = 0
def bfs(x,y):
    q = deque()
    q.append((x,y))
    dx = [0, 0, -1, 1]
    dy = [-1, 1, 0, 0]
    visited[x][y] = True
    while q:
        x, y = q.popleft()
        for i in range(4):
            if floor[x][y] == '-':
                ny = y + dy[i]
                if ny<0 or ny>=m:
                    continue
            elif floor[x][y] == '|':
                nx = x + dx[i]
                if nx<0 or nx>=n:
                    continue
            if floor[x][y] == '-':
                if floor[x][ny] == floor[x][y] and visited[x][ny] == False:
                    q.append((x,ny))
                    visited[x][ny] = True
                else:
                    continue
            elif floor[x][y] == '|':
                if floor[nx][y] == floor[x][y] and visited[nx][y] == False:
                    q.append((nx,y))
                    visited[nx][y] = True
                else:
                    continue

for i in range(n):
    for j in range(m):
        if not visited[i][j]:
            bfs(i,j)
            cnt += 1
                
print(cnt)

    
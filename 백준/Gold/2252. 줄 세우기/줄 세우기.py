import sys
from collections import deque

v, e = map(int,sys.stdin.readline().split())
adj = [[]for i in range(v+1)]
count = [0 for i in range(v+1)]

for i in range(e):
    a,b = map(int,sys.stdin.readline().split())
    adj[a].append(b)
    count[b] += 1

def topo():
    q = deque()
    for i in range(1,v+1):
        if count[i] == 0:
            q.append(i)
    while q:
        start = q.popleft()
        print(start,end=' ')
        for i in adj[start]:
            count[i] -= 1
            if count[i] == 0:
                q.append(i)

topo()
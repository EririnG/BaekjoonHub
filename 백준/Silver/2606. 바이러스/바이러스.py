import sys
sys.setrecursionlimit(10**5)

def search(start):
    for i in range(n):
        if network[start][i] == 1 and i not in cnt:
            cnt.add(i)
            search(i)
        
cnt = set()
n = int(sys.stdin.readline())
m = int(sys.stdin.readline())
network = [[0 for i in range(n)] for i in range(n)]
for i in range(m):
    a, b = map(int, sys.stdin.readline().split())
    network[a-1][b-1] = 1
    network[b-1][a-1] = 1

search(0)
if len(cnt) == 0:
    print(0)
else:
    print(len(cnt)-1)